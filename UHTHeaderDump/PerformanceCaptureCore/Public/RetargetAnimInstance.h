#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=IKRig -ObjectName=AnimNode_RetargetPoseFromMesh -FallbackName=AnimNode_RetargetPoseFromMesh
#include "RetargetAnimInstance.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class URetargetAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnimNode_RetargetPoseFromMesh RetargetNode;
    
public:
    URetargetAnimInstance();

};

