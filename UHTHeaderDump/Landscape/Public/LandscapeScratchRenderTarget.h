#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LandscapeScratchRenderTarget.generated.h"

class UTextureRenderTarget;

UCLASS(Blueprintable, Transient)
class ULandscapeScratchRenderTarget : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget* RenderTarget;
    
public:
    ULandscapeScratchRenderTarget();

};

