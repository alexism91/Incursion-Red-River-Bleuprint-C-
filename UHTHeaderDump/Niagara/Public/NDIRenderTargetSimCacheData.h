#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NDIRenderTargetSimCacheFrame.h"
#include "NDIRenderTargetSimCacheData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNDIRenderTargetSimCacheData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CompressionType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNDIRenderTargetSimCacheFrame> Frames;
    
public:
    UNDIRenderTargetSimCacheData();

};

