#pragma once
#include "CoreMinimal.h"
#include "ReplicationBridge.h"
#include "ObjectReplicationBridge.generated.h"

class UNetObjectFactory;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UObjectReplicationBridge : public UReplicationBridge {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNetObjectFactory*> NetObjectFactories;
    
public:
    UObjectReplicationBridge();

};

