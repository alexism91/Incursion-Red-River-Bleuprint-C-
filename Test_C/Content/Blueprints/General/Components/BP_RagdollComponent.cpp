class UBP_RagdollComponent_C : public UIRRRagdollComponent
{
public:
    struct FIRRRagdollCollisionSettings RagdollCollisionSettings = {
        "RagdollEndCollisionChannel": ECollisionChannel::ECC_PhysicsBody
    };

};