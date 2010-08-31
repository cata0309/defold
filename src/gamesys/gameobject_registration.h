#ifndef GAMEOBJECT_REGISTRATION_H
#define GAMEOBJECT_REGISTRATION_H

#include <gameobject/gameobject.h>
#include <physics/physics.h>
#include <render/render.h>

namespace dmGameSystem
{
    dmGameObject::Result RegisterModelComponent(dmResource::HFactory factory,
                                                  dmGameObject::HRegister regist,
                                                  dmRender::RenderContext* context);

    struct PhysicsContext
    {
        bool m_Debug;
    };

    dmGameObject::Result RegisterPhysicsComponent(dmResource::HFactory factory,
                                                  dmGameObject::HRegister regist,
                                                  PhysicsContext* context);

    void RequestRayCast(dmGameObject::HCollection collection, const dmPhysics::RayCastRequest& request);
}

#endif // GAMEOBJECT_REGISTRATION_H
