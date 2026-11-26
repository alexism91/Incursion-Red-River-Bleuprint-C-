#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "NDIDataChannelWriteSimCacheFrame.h"
#include "NDIDataChannelWriteSimCacheData.generated.h"

class UNiagaraDataInterfaceDataChannelWrite;

UCLASS(Blueprintable, MinimalAPI)
class UNDIDataChannelWriteSimCacheData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNDIDataChannelWriteSimCacheFrame> FrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath DataChannelReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UNiagaraDataInterfaceDataChannelWrite* DataInterface;
    
    UNDIDataChannelWriteSimCacheData();

};

