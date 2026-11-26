#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NDIMemoryBufferSimCacheDataFrame.h"
#include "NDIMemoryBufferSimCacheData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNDIMemoryBufferSimCacheData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNDIMemoryBufferSimCacheDataFrame> FrameData;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint32> BufferData;
    
    UNDIMemoryBufferSimCacheData();

};

