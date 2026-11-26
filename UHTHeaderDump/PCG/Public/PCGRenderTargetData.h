#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "PCGBaseTextureData.h"
#include "PCGRenderTargetData.generated.h"

class UTextureRenderTarget2D;

UCLASS(Blueprintable, MinimalAPI)
class UPCGRenderTargetData : public UPCGBaseTextureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOwnsRenderTarget;
    
    UPCGRenderTargetData();

    UFUNCTION(BlueprintCallable)
    void Initialize(UTextureRenderTarget2D* InRenderTarget, const FTransform& InTransform, bool bInSkipReadbackToCPU, bool bInTakeOwnershipOfRenderTarget);
    
};

