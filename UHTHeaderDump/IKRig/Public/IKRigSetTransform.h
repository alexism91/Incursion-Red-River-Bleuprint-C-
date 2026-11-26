#pragma once
#include "CoreMinimal.h"
#include "IKRigSetTransformSettings.h"
#include "IKRigSolverBase.h"
#include "IKRigSetTransform.generated.h"

USTRUCT(BlueprintType)
struct FIKRigSetTransform : public FIKRigSolverBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIKRigSetTransformSettings Settings;
    
    IKRIG_API FIKRigSetTransform();
};

