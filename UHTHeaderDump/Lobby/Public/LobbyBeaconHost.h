#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineBeaconHostObject -FallbackName=OnlineBeaconHostObject
#include "LobbyBeaconHost.generated.h"

class ALobbyBeaconState;

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class ALobbyBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ALobbyBeaconState> LobbyStateClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ALobbyBeaconState* LobbyState;
    
public:
    ALobbyBeaconHost(const FObjectInitializer& ObjectInitializer);

};

