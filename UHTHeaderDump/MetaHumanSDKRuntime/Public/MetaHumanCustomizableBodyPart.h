#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MetaHumanCustomizableBodyPart.generated.h"

class UControlRig;
class UPhysicsAsset;

USTRUCT(BlueprintType)
struct FMetaHumanCustomizableBodyPart {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UControlRig> ControlRigClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControlRigLODThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicsAsset* PhysicsAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RigidBodyLODThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ComponentName;
    
    METAHUMANSDKRUNTIME_API FMetaHumanCustomizableBodyPart();
};

