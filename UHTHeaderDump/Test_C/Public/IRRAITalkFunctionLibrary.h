#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRAITalkFunctionLibrary.generated.h"

class APawn;
class UAkAudioEvent;
class UIRRRadioDataAsset;

UCLASS(Blueprintable)
class TEST_C_API UIRRAITalkFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRAITalkFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float CalcChanceToIdleTalk(const APawn* AIPawn, float CloseFriendChance, float CloseDistance, float MidFriendChance, float MidDistance, float FarFriendChance);
    
    UFUNCTION(BlueprintCallable)
    static bool AddRadioMessageRow(UIRRRadioDataAsset* Asset, FName TagName, UAkAudioEvent* BroadcasterEvent);
    
};

