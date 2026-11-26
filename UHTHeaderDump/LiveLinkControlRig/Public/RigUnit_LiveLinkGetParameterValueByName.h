#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=SubjectFrameHandle -FallbackName=SubjectFrameHandle
#include "RigUnit_LiveLinkBase.h"
#include "RigUnit_LiveLinkGetParameterValueByName.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_LiveLinkGetParameterValueByName : public FRigUnit_LiveLinkBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubjectFrameHandle SubjectFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    LIVELINKCONTROLRIG_API FRigUnit_LiveLinkGetParameterValueByName();
};

