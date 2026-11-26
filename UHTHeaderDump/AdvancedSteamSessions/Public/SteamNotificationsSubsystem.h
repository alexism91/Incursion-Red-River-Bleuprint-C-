#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OnSteamOverlayActivatedDelegate.h"
#include "SteamNotificationsSubsystem.generated.h"

UCLASS(Blueprintable)
class ADVANCEDSTEAMSESSIONS_API USteamNotificationsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSteamOverlayActivated OnSteamOverlayActivated_Bind;
    
    USteamNotificationsSubsystem();

};

