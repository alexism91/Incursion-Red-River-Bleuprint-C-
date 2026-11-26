#pragma once
#include "CoreMinimal.h"
#include "IKRigSolverBase.generated.h"

USTRUCT(BlueprintType)
struct FIKRigSolverBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    IKRIG_API FIKRigSolverBase();
};

