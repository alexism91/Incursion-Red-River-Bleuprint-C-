#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkMessageBusFramework -ObjectName=ELiveLinkTopologyMode -FallbackName=ELiveLinkTopologyMode
#include "LiveLinkHubDiscoveryMessage.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkHubDiscoveryMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProviderName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkTopologyMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MachineName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstanceId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CreationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LiveLinkVersion;
    
    LIVELINKHUBMESSAGING_API FLiveLinkHubDiscoveryMessage();
};

