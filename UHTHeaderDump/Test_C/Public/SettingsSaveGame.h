#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
#include "IRRGameplaySettings.h"
#include "IRRVoiceUserSettings.h"
#include "SettingsSaveGame.generated.h"

class USettingsSaveGame;

UCLASS(Blueprintable)
class TEST_C_API USettingsSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGameplaySettings FirstPersonControllerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRVoiceUserSettings VoiceSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Build;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PatchNotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowedPatchNotes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ImportedNewsIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConfirmedAIDifficulty;
    
    USettingsSaveGame();

    UFUNCTION(BlueprintCallable)
    static USettingsSaveGame* CreateDefaultSettingsSave();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CreateDefaultSaveGame();
    
};

