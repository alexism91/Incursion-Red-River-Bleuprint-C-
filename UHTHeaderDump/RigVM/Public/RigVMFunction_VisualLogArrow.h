#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RigVMFunction_VisualLogObject.h"
#include "RigVMFunction_VisualLogArrow.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_VisualLogArrow : public FRigVMFunction_VisualLogObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SegmentStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SegmentEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrowHeadSize;
    
    RIGVM_API FRigVMFunction_VisualLogArrow();
};

