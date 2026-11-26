#pragma once
#include "CoreMinimal.h"
#include "RigModuleExecutionElement.generated.h"

USTRUCT(BlueprintType)
struct FRigModuleExecutionElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModuleName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuted;
    
    CONTROLRIG_API FRigModuleExecutionElement();
};

