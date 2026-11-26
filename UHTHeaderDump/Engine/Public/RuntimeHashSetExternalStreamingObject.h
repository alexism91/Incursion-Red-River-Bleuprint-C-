#pragma once
#include "CoreMinimal.h"
#include "RuntimeHashExternalStreamingObjectBase.h"
#include "RuntimePartitionStreamingData.h"
#include "RuntimeHashSetExternalStreamingObject.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class URuntimeHashSetExternalStreamingObject : public URuntimeHashExternalStreamingObjectBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRuntimePartitionStreamingData> RuntimeStreamingData;
    
    URuntimeHashSetExternalStreamingObject();

};

