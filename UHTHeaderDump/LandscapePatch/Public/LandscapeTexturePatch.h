#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ETextureRenderTargetFormat -FallbackName=ETextureRenderTargetFormat
#include "ELandscapeTextureHeightPatchEncoding.h"
#include "ELandscapeTextureHeightPatchZeroHeightMeaning.h"
#include "ELandscapeTexturePatchBlendMode.h"
#include "ELandscapeTexturePatchFalloffMode.h"
#include "ELandscapeTexturePatchSourceMode.h"
#include "LandscapePatchComponent.h"
#include "LandscapeTexturePatchEncodingSettings.h"
#include "LandscapeTexturePatch.generated.h"

class ULandscapeHeightTextureBackedRenderTarget;
class ULandscapeWeightPatchTextureInfo;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULandscapeTexturePatch : public ULandscapePatchComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResolutionX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResolutionY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D UnscaledPatchCoverage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELandscapeTexturePatchBlendMode BlendMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELandscapeTexturePatchFalloffMode FalloffMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Falloff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELandscapeTexturePatchSourceMode HeightSourceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELandscapeTexturePatchSourceMode DetailPanelHeightSourceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    ULandscapeHeightTextureBackedRenderTarget* HeightInternalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* HeightTextureAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseTextureAlphaForHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELandscapeTextureHeightPatchEncoding HeightEncoding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLandscapeTexturePatchEncodingSettings HeightEncodingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyComponentZScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    TArray<ULandscapeWeightPatchTextureInfo*> WeightPatches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBaseResolutionOffLandscape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResolutionMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitTextureSizeX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitTextureSizeY;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETextureRenderTargetFormat> HeightRenderTargetFormat;
    
public:
    ULandscapeTexturePatch(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SnapToLandscape();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn);
    
    UFUNCTION(BlueprintCallable)
    void SetWeightPatchTextureAsset(const FName& InWeightmapLayerName, UTexture* TextureIn);
    
    UFUNCTION(BlueprintCallable)
    void SetWeightPatchSourceMode(const FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetWeightPatchBlendModeOverride(const FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode NewBlendMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUseAlphaChannelForWeightPatch(const FName& InWeightmapLayerName, bool bUseAlphaChannel);
    
    UFUNCTION(BlueprintCallable)
    void SetUseAlphaChannelForHeight(bool bUse);
    
    UFUNCTION(BlueprintCallable)
    void SetUnscaledCoverage(FVector2D Coverage);
    
    UFUNCTION(BlueprintCallable)
    void SetResolution(FVector2D ResolutionIn);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightTextureAsset(UTexture* TextureIn);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightRenderTargetFormat(TEnumAsByte<ETextureRenderTargetFormat> Format);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightEncodingSettings(const FLandscapeTexturePatchEncodingSettings& Settings);
    
    UFUNCTION(BlueprintCallable)
    void SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetFalloffMode(ELandscapeTexturePatchFalloffMode FalloffModeIn);
    
    UFUNCTION(BlueprintCallable)
    void SetFalloff(float FalloffIn);
    
    UFUNCTION(BlueprintCallable)
    void SetEditVisibilityLayer(const FName& InWeightmapLayerName, const bool bEditVisibilityLayer);
    
    UFUNCTION(BlueprintCallable)
    void SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn);
    
    UFUNCTION(BlueprintCallable)
    void ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestReinitializeWeights();
    
    UFUNCTION(BlueprintCallable)
    void RequestReinitializeHeight();
    
public:
    UFUNCTION(BlueprintCallable)
    void RemoveWeightPatch(const FName& InWeightmapLayerName);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllWeightPatches();
    
    UFUNCTION(BlueprintCallable)
    UTexture* GetWeightPatchTextureAsset(const FName& InWeightmapLayerName);
    
    UFUNCTION(BlueprintCallable)
    ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(const FName& InWeightmapLayerName);
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetWeightPatchRenderTarget(const FName& InWeightmapLayerName, bool bMarkDirty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetUnscaledCoverage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetResolution() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetPatchToWorldTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInitResolutionFromLandscape(float NewResolutionMultiplier, FVector2D& ResolutionOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELandscapeTexturePatchSourceMode GetHeightSourceMode() const;
    
    UFUNCTION(BlueprintCallable)
    UTextureRenderTarget2D* GetHeightRenderTarget(bool bMarkDirty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetFullUnscaledWorldSize() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAllWeightPatchLayerNames();
    
    UFUNCTION(BlueprintCallable)
    void DisableAllWeightPatches();
    
    UFUNCTION(BlueprintCallable)
    void ClearWeightPatchBlendModeOverride(const FName& InWeightmapLayerName);
    
    UFUNCTION(BlueprintCallable)
    void AddWeightPatch(const FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel);
    
};

