#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Test_C -ObjectName=DefaultItemsContainer -FallbackName=DefaultItemsContainer
#include "IRRMissionRewards.generated.h"

class UIRRItemsPreset;

USTRUCT(BlueprintType)
struct FIRRMissionRewards : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRItemsPreset* Preset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDefaultItemsContainer DefaultItemsContainer;
    
    IRRMISSIONSYSTEM_API FIRRMissionRewards();
};

