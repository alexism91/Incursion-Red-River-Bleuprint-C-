#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickFunction -FallbackName=TickFunction
#include "AttributeBasedRootMotionComponentPrePhysicsTickFunction.generated.h"

USTRUCT(BlueprintType)
struct FAttributeBasedRootMotionComponentPrePhysicsTickFunction : public FTickFunction {
    GENERATED_BODY()
public:
    MOTIONWARPING_API FAttributeBasedRootMotionComponentPrePhysicsTickFunction();
};

template<>
struct TStructOpsTypeTraits<FAttributeBasedRootMotionComponentPrePhysicsTickFunction> : public TStructOpsTypeTraitsBase2<FAttributeBasedRootMotionComponentPrePhysicsTickFunction>
{
    enum
    {
        WithCopy = false
    };
};

