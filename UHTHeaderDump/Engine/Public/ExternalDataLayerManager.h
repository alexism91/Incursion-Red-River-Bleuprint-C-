#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ExternalDataLayerManager.generated.h"

class UExternalDataLayerAsset;
class URuntimeHashExternalStreamingObjectBase;

UCLASS(Blueprintable, MinimalAPI, Within=WorldPartition)
class UExternalDataLayerManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UExternalDataLayerAsset*, URuntimeHashExternalStreamingObjectBase*> ExternalStreamingObjects;
    
public:
    UExternalDataLayerManager();

};

