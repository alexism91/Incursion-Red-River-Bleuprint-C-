#pragma once
#include "CoreMinimal.h"
#include "IRRGameplaySettings.h"
#include "IRROutfitComponent.h"
#include "IRRPlayerOutfitOption.h"
#include "IRRPlayerOutfitComponent.generated.h"

class AController;
class APawn;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRPlayerOutfitComponent : public UIRROutfitComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShowLocalPlayer;
    
public:
    UIRRPlayerOutfitComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SetPlayerOutfit(FName OutfitId);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ResolvePlayerOutfit(FName OutfitId, FIRRPlayerOutfitOption& OutOption);
    
    UFUNCTION(BlueprintCallable)
    void RefreshFromSettings();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOwnerRestarted(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleOwnerControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
    UFUNCTION(BlueprintCallable)
    void HandleControllerSettingsChanged(FIRRGameplaySettings NewSettings);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetSavedPlayerOutfit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FIRRPlayerOutfitOption> GetPlayerOutfitOptions();
    
};

