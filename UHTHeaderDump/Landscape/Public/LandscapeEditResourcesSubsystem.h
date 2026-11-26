#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "LandscapeEditResourcesSubsystem.generated.h"

class ULandscapeScratchRenderTarget;

UCLASS(Blueprintable)
class ULandscapeEditResourcesSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NonTransactional, Transient, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeScratchRenderTarget*> ScratchRenderTargets;
    
public:
    ULandscapeEditResourcesSubsystem();

};

