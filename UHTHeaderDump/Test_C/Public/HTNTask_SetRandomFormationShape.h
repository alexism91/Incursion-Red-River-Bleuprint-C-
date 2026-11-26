#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNTask -FallbackName=HTNTask
#include "IRRWeightedFormationPreset.h"
#include "HTNTask_SetRandomFormationShape.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNTask_SetRandomFormationShape : public UHTNTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRWeightedFormationPreset> Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresetSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresetWidth;
    
    UHTNTask_SetRandomFormationShape();

};

