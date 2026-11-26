#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NDIArraySimCacheDataFrame.h"
#include "NDIArraySimCacheData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNDIArraySimCacheData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNDIArraySimCacheDataFrame> CpuFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNDIArraySimCacheDataFrame> GpuFrameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> BufferData;
    
    UNDIArraySimCacheData();

};

