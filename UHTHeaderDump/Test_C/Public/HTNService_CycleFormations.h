#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=HTN -ObjectName=HTNService -FallbackName=HTNService
#include "EIRRFormationPreset.h"
#include "HTNService_CycleFormations.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UHTNService_CycleFormations : public UHTNService {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIRRFormationPreset> Presets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresetSpacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresetWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnnounceOnScreen;
    
    UHTNService_CycleFormations();

};

