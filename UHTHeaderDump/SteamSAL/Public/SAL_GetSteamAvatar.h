#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ESALAvatarSize.h"
#include "SAL_OnGetAvatarFailureDelegate.h"
#include "SAL_OnGetAvatarSuccessDelegate.h"
#include "SAL_GetSteamAvatar.generated.h"

class UObject;
class USAL_GetSteamAvatar;

UCLASS(Blueprintable)
class STEAMSAL_API USAL_GetSteamAvatar : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnGetAvatarSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSAL_OnGetAvatarFailure OnFailure;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
public:
    USAL_GetSteamAvatar();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static USAL_GetSteamAvatar* GetSteamAvatar(UObject* NewWorldContextObject, const FString& SteamID64, ESALAvatarSize Size);
    
};

