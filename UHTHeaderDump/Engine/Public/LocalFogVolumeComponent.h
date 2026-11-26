#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "SceneComponent.h"
#include "LocalFogVolumeComponent.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULocalFogVolumeComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float RadialFogExtinction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float HeightFogExtinction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float HeightFogFalloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float HeightFogOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float FogPhaseG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor FogAlbedo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FLinearColor FogEmissive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FogSortPriority;
    
    ULocalFogVolumeComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRadialFogExtinction(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFogOffset(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFogFalloff(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightFogExtinction(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFogPhaseG(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFogEmissive(FLinearColor NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetFogAlbedo(FLinearColor NewValue);
    
};

