#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "Templates/SubclassOf.h"
#include "OnlineBeaconHostObject.generated.h"

class AOnlineBeaconClient;

UCLASS(Blueprintable, MinimalAPI, NoExport, NotPlaceable, Transient)
class AOnlineBeaconHostObject : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString BeaconTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AOnlineBeaconClient> ClientBeaconActorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AOnlineBeaconClient*> ClientActors;
    
public:
    AOnlineBeaconHostObject(const FObjectInitializer& ObjectInitializer);

};

