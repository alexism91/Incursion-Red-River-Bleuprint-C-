#include "AnimNodeRigidBodyLibrary.h"

UAnimNodeRigidBodyLibrary::UAnimNodeRigidBodyLibrary() {
}

FRigidBodyAnimNodeReference UAnimNodeRigidBodyLibrary::SetOverridePhysicsAsset(const FRigidBodyAnimNodeReference& Node, UPhysicsAsset* PhysicsAsset) {
    return FRigidBodyAnimNodeReference{};
}

void UAnimNodeRigidBodyLibrary::ConvertToRigidBodyAnimNodePure(const FAnimNodeReference& Node, FRigidBodyAnimNodeReference& RigidBodyAnimNode, bool& Result) {
}

FRigidBodyAnimNodeReference UAnimNodeRigidBodyLibrary::ConvertToRigidBodyAnimNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result) {
    return FRigidBodyAnimNodeReference{};
}


