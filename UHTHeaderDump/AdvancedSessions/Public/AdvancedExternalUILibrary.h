#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPUniqueNetId.h"
#include "EBlueprintResultSwitch.h"
#include "AdvancedExternalUILibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class UAdvancedExternalUILibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedExternalUILibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowWebURLUI(UObject* WorldContextObject, const FString& URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowProfileUI(UObject* WorldContextObject, const FBPUniqueNetId PlayerViewingProfile, const FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowLeaderBoardUI(UObject* WorldContextObject, const FString& LeaderboardName, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowInviteUI(UObject* WorldContextObject, APlayerController* PlayerController, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowFriendsUI(UObject* WorldContextObject, APlayerController* PlayerController, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowAccountUpgradeUI(UObject* WorldContextObject, const FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CloseWebURLUI(UObject* WorldContextObject);
    
};

