#pragma once
#include "CoreMinimal.h"
#include "RemoteObjectId.h"
#include "RemoteServerId.h"
#include "RemoteObjectReference.generated.h"

USTRUCT(BlueprintType, NoExport)
struct FRemoteObjectReference {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoteObjectId ObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoteServerId ServerId;
    
    COREUOBJECT_API FRemoteObjectReference();
};

