#pragma once
#include "CoreMinimal.h"
#include "PostProcessSettings.h"
#include "SceneCaptureComponent.h"
#include "SceneCaptureComponentCube.generated.h"

class UTextureRenderTargetCube;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USceneCaptureComponentCube : public USceneCaptureComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTargetCube* TextureTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCaptureRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PostProcessSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float PostProcessBlendWeight;
    
    USceneCaptureComponentCube(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void CaptureScene();
    
};

