//  Copyright (c) 2018 Hugo Amiard hugo.amiard@laposte.net
//  This software is licensed  under the terms of the GNU General Public License v3.0.
//  See the attached LICENSE.txt file or https://www.gnu.org/licenses/gpl-3.0.en.html.
//  This notice and the license may not be removed or altered from any source distribution.

#pragma once

#ifdef TOY_PRIVATE

#include <math/Vec.h>
#include <core/Forward.h>
#include <core/Movable/MotionState.h>

/* bullet */
class TOY_CORE_EXPORT btMotionState;
#include <LinearMath/btMotionState.h>

using namespace mud; namespace toy
{
    class TOY_CORE_EXPORT BulletMotionState : public btMotionState
    {
    public:
        BulletMotionState(MotionState& motionState);

		MotionState& m_motion_state;

		virtual void getWorldTransform(btTransform& worldTransform) const;
		virtual void setWorldTransform(const btTransform& worldTransform);
    };
}

#endif