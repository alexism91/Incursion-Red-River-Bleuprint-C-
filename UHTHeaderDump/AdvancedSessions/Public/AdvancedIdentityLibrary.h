#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "BPUniqueNetId.h"
#include "BPUserOnlineAccount.h"
#include "EBPLoginStatus.h"
#include "EBlueprintResultSwitch.h"
#include "AdvancedIdentityLibrary.generated.h"

class APlayerController;
class UObject;

UCLASS(Blueprintable)
class UAdvancedIdentityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAdvancedIdentityLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, const FString& NewAttributeValue, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserId(const FBPUserOnlineAccount& AccountInfo, FBPUniqueNetId& UniqueNetId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserAccountRealName(const FBPUserOnlineAccount& AccountInfo, FString& UserName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserAccountDisplayName(const FBPUserOnlineAccount& AccountInfo, FString& DisplayName);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserAccountAuthAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, FString& AuthAttribute, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable)
    static void GetUserAccountAttribute(const FBPUserOnlineAccount& AccountInfo, const FString& AttributeName, FString& AttributeValue, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetUserAccountAccessToken(const FBPUserOnlineAccount& AccountInfo, FString& AccessToken);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetUserAccount(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId, FBPUserOnlineAccount& AccountInfo, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerNickname(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId, FString& PlayerNickname);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetPlayerAuthToken(UObject* WorldContextObject, APlayerController* PlayerController, FString& AuthToken, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetLoginStatus(UObject* WorldContextObject, const FBPUniqueNetId& UniqueNetId, EBPLoginStatus& LoginStatus, EBlueprintResultSwitch& Result);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetAllUserAccounts(UObject* WorldContextObject, TArray<FBPUserOnlineAccount>& AccountInfos, EBlueprintResultSwitch& Result);
    
};

