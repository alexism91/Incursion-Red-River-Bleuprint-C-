#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "DefaultItem.h"
#include "Preset.h"
#include "PresetArray.h"
#include "IRRGunsmithSaveGame.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRGunsmithSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FPresetArray> PresetMap;
    
    UIRRGunsmithSaveGame();

    UFUNCTION(BlueprintCallable)
    bool RemovePreset(FPreset Preset);
    
    UFUNCTION(BlueprintCallable)
    bool AddPreset(FName PresetName, FDefaultItem PresetItem);
    
};

