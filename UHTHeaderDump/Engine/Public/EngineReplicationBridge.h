#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IrisCore -ObjectName=ObjectReplicationBridge -FallbackName=ObjectReplicationBridge
#include "EngineReplicationBridge.generated.h"

class UIrisObjectReferencePackageMap;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UEngineReplicationBridge : public UObjectReplicationBridge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIrisObjectReferencePackageMap* ObjectReferencePackageMap;
    
    UEngineReplicationBridge();

};

