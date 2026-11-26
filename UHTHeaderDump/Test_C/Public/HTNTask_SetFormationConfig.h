#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNTask -FallbackName=HTNTask
#include "IRRFormationConfig.h"
#include "HTNTask_SetFormationConfig.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_SetFormationConfig : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRFormationConfig Config;
    
    UHTNTask_SetFormationConfig();

};

