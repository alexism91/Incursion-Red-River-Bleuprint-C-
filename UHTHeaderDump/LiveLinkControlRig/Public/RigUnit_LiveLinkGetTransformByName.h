#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=SubjectFrameHandle -FallbackName=SubjectFrameHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=ERigVMTransformSpace -FallbackName=ERigVMTransformSpace
#include "RigUnit_LiveLinkBase.h"
#include "RigUnit_LiveLinkGetTransformByName.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_LiveLinkGetTransformByName : public FRigUnit_LiveLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubjectFrameHandle SubjectFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TransformName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigVMTransformSpace Space;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Transform;
    
    LIVELINKCONTROLRIG_API FRigUnit_LiveLinkGetTransformByName();
};

