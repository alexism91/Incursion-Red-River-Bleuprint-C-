#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ModelingComponents -ObjectName=SingleSelectionMeshEditingTool -FallbackName=SingleSelectionMeshEditingTool
#include "HoleFillTool.generated.h"

class UBoundarySelectionMechanic;
class UHoleFillStatisticsProperties;
class UHoleFillToolActions;
class UHoleFillToolProperties;
class UMeshOpPreviewWithBackgroundCompute;
class USmoothHoleFillProperties;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UHoleFillTool : public USingleSelectionMeshEditingTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USmoothHoleFillProperties* SmoothHoleFillProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoleFillToolProperties* Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoleFillToolActions* Actions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoleFillStatisticsProperties* Statistics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoundarySelectionMechanic* SelectionMechanic;
    
public:
    UHoleFillTool();

};

