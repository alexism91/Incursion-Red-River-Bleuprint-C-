#pragma once
#include "CoreMinimal.h"
#include "PCGData.h"
#include "PCGProxyForGPUData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGProxyForGPUData : public UPCGData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DataIndexInCollection;
    
public:
    UPCGProxyForGPUData();

};

