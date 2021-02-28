/********************************************************************************
* ReactPhysics3D physics library, http://www.reactphysics3d.com                 *
* Copyright (c) 2010-2016 Daniel Chappuis                                       *
*********************************************************************************
*                                                                               *
* This software is provided 'as-is', without any express or implied warranty.   *
* In no event will the authors be held liable for any damages arising from the  *
* use of this software.                                                         *
*                                                                               *
* Permission is granted to anyone to use this software for any purpose,         *
* including commercial applications, and to alter it and redistribute it        *
* freely, subject to the following restrictions:                                *
*                                                                               *
* 1. The origin of this software must not be misrepresented; you must not claim *
*    that you wrote the original software. If you use this software in a        *
*    product, an acknowledgment in the product documentation would be           *
*    appreciated but is not required.                                           *
*                                                                               *
* 2. Altered source versions must be plainly marked as such, and must not be    *
*    misrepresented as being the original software.                             *
*                                                                               *
* 3. This notice may not be removed or altered from any source distribution.    *
*                                                                               *
********************************************************************************/

#ifndef FIXED_JOINT_SCENE_H
#define FIXED_JOINT_SCENE_H

// Libraries
#include "openglframework.h"
#include <reactphysics3d/reactphysics3d.h>
#include "Box.h"
#include "SceneDemo.h"

namespace fixedjointscene {

// Constants
const float SCENE_RADIUS = 30.0f;
const openglframework::Vector3 BOX_SIZE(2, 2, 2);           // Box dimensions in meters
const openglframework::Vector3 FLOOR_SIZE(50, 0.5f, 50);    // Floor dimensions in meters
const int NB_BALLSOCKETJOINT_BOXES = 7;                     // Number of Ball-And-Socket chain boxes
const int NB_HINGE_BOXES = 7;                               // Number of Hinge chain boxes

// Class FixedJointScene
class FixedJointScene : public SceneDemo {

    protected :

        // -------------------- Attributes -------------------- //

        /// First box
        Box* mBox1;

        /// Second box
        Box* mBox2;

        /// Fixed joint
        rp3d::FixedJoint* mFixedJoint;

        // -------------------- Methods -------------------- //

        /// Create the fixed joint
        void createFixedJoint();

    public:

        // -------------------- Methods -------------------- //

        /// Constructor
        FixedJointScene(const std::string& name, EngineSettings& settings);

        /// Destructor
        virtual ~FixedJointScene() override ;

        /// Reset the scene
        virtual void reset() override;
};

}

#endif