#include "AdvancedExternalUILibrary.h"

UAdvancedExternalUILibrary::UAdvancedExternalUILibrary() {
}

void UAdvancedExternalUILibrary::ShowWebURLUI(UObject* WorldContextObject, const FString& URLToShow, EBlueprintResultSwitch& Result, TArray<FString>& AllowedDomains, bool bEmbedded, bool bShowBackground, bool bShowCloseButton, int32 OffsetX, int32 OffsetY, int32 SizeX, int32 SizeY) {
}

void UAdvancedExternalUILibrary::ShowProfileUI(UObject* WorldContextObject, const FBPUniqueNetId PlayerViewingProfile, const FBPUniqueNetId PlayerToViewProfileOf, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::ShowLeaderBoardUI(UObject* WorldContextObject, const FString& LeaderboardName, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::ShowInviteUI(UObject* WorldContextObject, APlayerController* PlayerController, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::ShowFriendsUI(UObject* WorldContextObject, APlayerController* PlayerController, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::ShowAccountUpgradeUI(UObject* WorldContextObject, const FBPUniqueNetId PlayerRequestingAccountUpgradeUI, EBlueprintResultSwitch& Result) {
}

void UAdvancedExternalUILibrary::CloseWebURLUI(UObject* WorldContextObject) {
}


