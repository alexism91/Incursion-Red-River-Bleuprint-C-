#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RemoteObjectId -FallbackName=RemoteObjectId
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RemoteObjectPathName -FallbackName=RemoteObjectPathName
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RemoteServerId -FallbackName=RemoteServerId
#include "RemoteObjectReferenceNetSerializationHelper.generated.h"

USTRUCT(BlueprintType)
struct FRemoteObjectReferenceNetSerializationHelper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoteObjectId ObjectId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoteServerId ServerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRemoteObjectPathName Path;
    
    IRISCORE_API FRemoteObjectReferenceNetSerializationHelper();
};

