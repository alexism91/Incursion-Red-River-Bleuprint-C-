#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkMessageBusFramework -ObjectName=ELiveLinkTopologyMode -FallbackName=ELiveLinkTopologyMode
#include "ELiveLinkClientStatus.h"
#include "LiveLinkClientInfoMessage.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkClientInfoMessage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LongName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkClientStatus Status;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HostName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ProjectName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CurrentLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LiveLinkInstanceName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkTopologyMode TopologyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LiveLinkVersion;
    
    LIVELINKHUBMESSAGING_API FLiveLinkClientInfoMessage();
};

