#pragma once
#include "CoreMinimal.h"
#include "MassModuleSettings.h"
#include "MassProcessingPhaseConfig.h"
#include "MassEntitySettings.generated.h"

class UMassProcessor;

UCLASS(Blueprintable, CollapseCategories, MinimalAPI, Config=Engine)
class UMassEntitySettings : public UMassModuleSettings {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChunkMemorySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString DumpDependencyGraphFileName;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMassProcessingPhaseConfig ProcessingPhasesConfig[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMassProcessor*> ProcessorCDOs;
    
    UMassEntitySettings();

};

