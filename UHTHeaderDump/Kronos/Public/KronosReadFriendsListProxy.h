#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "OnKronosReadFriendsListCompleteDelegate.h"
#include "KronosReadFriendsListProxy.generated.h"

class UKronosReadFriendsListProxy;
class UObject;

UCLASS(Blueprintable)
class KRONOS_API UKronosReadFriendsListProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosReadFriendsListComplete OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosReadFriendsListComplete OnFailure;
    
    UKronosReadFriendsListProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UKronosReadFriendsListProxy* ReadKronosFriendsList(UObject* WorldContextObject, bool bInGamePlayersOnly);
    
};

