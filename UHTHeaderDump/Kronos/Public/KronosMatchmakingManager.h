#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "K2_OnCancelKronosMatchmakingCompleteDelegate.h"
#include "K2_OnKronosMatchmakingCompleteDelegate.h"
#include "K2_OnKronosMatchmakingStateChangedDelegate.h"
#include "K2_OnKronosMatchmakingUpdatedDelegate.h"
#include "K2_OnStartKronosMatchmakingCompleteDelegate.h"
#include "KronosMatchmakingManager.generated.h"

class UKronosMatchmakingManager;
class UKronosMatchmakingPolicy;

UCLASS(Blueprintable)
class KRONOS_API UKronosMatchmakingManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UKronosMatchmakingPolicy* MatchmakingPolicy;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FK2_OnStartKronosMatchmakingComplete OnMatchmakingStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FK2_OnKronosMatchmakingComplete OnMatchmakingCompleteEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FK2_OnCancelKronosMatchmakingComplete OnMatchmakingCanceledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FK2_OnKronosMatchmakingStateChanged OnMatchmakingStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FK2_OnKronosMatchmakingUpdated OnMatchmakingUpdatedEvent;
    
public:
    UKronosMatchmakingManager();

    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKronosMatchmakingManager* Get(const UObject* WorldContextObject);
    
};

