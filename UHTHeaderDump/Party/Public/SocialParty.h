#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "Templates/SubclassOf.h"
#include "SocialParty.generated.h"

class APartyBeaconClient;
class ASpectatorBeaconClient;
class UPartyMember;

UCLASS(Abstract, Blueprintable, MinimalAPI, Transient, Config=Game, Within=SocialManager)
class USocialParty : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APartyBeaconClient> ReservationBeaconClientClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASpectatorBeaconClient> SpectatorBeaconClientClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OwningLocalUserId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl CurrentLeaderId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FUniqueNetIdRepl, UPartyMember*> PartyMembersById;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAutomaticPartyRejoin;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double PlatformUserInviteCooldown;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    double PrimaryUserInviteCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APartyBeaconClient> ReservationBeaconClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ASpectatorBeaconClient> SpectatorBeaconClient;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JoinInProgressTimerRate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JoinInProgressRequestTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 JoinInProgressResponseTimeout;
    
public:
    USocialParty();

};

