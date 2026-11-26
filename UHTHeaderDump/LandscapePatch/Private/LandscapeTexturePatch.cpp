#include "LandscapeTexturePatch.h"

ULandscapeTexturePatch::ULandscapeTexturePatch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ResolutionX = 32;
    this->ResolutionY = 32;
    this->BlendMode = ELandscapeTexturePatchBlendMode::AlphaBlend;
    this->FalloffMode = ELandscapeTexturePatchFalloffMode::RoundedRectangle;
    this->Falloff = 0.00f;
    this->HeightSourceMode = ELandscapeTexturePatchSourceMode::None;
    this->DetailPanelHeightSourceMode = ELandscapeTexturePatchSourceMode::None;
    this->HeightInternalData = NULL;
    this->HeightTextureAsset = NULL;
    this->bUseTextureAlphaForHeight = false;
    this->HeightEncoding = ELandscapeTextureHeightPatchEncoding::WorldUnits;
    this->ZeroHeightMeaning = ELandscapeTextureHeightPatchZeroHeightMeaning::PatchZ;
    this->bApplyComponentZScale = true;
    this->bBaseResolutionOffLandscape = true;
    this->ResolutionMultiplier = 1.00f;
    this->InitTextureSizeX = 33;
    this->InitTextureSizeY = 33;
    this->HeightRenderTargetFormat = RTF_R32f;
}

void ULandscapeTexturePatch::SnapToLandscape() {
}

void ULandscapeTexturePatch::SetZeroHeightMeaning(ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn) {
}

void ULandscapeTexturePatch::SetWeightPatchTextureAsset(const FName& InWeightmapLayerName, UTexture* TextureIn) {
}

void ULandscapeTexturePatch::SetWeightPatchSourceMode(const FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode NewMode) {
}

void ULandscapeTexturePatch::SetWeightPatchBlendModeOverride(const FName& InWeightmapLayerName, ELandscapeTexturePatchBlendMode NewBlendMode) {
}

void ULandscapeTexturePatch::SetUseAlphaChannelForWeightPatch(const FName& InWeightmapLayerName, bool bUseAlphaChannel) {
}

void ULandscapeTexturePatch::SetUseAlphaChannelForHeight(bool bUse) {
}

void ULandscapeTexturePatch::SetUnscaledCoverage(FVector2D Coverage) {
}

void ULandscapeTexturePatch::SetResolution(FVector2D ResolutionIn) {
}

void ULandscapeTexturePatch::SetHeightTextureAsset(UTexture* TextureIn) {
}

void ULandscapeTexturePatch::SetHeightSourceMode(ELandscapeTexturePatchSourceMode NewMode) {
}

void ULandscapeTexturePatch::SetHeightRenderTargetFormat(TEnumAsByte<ETextureRenderTargetFormat> Format) {
}

void ULandscapeTexturePatch::SetHeightEncodingSettings(const FLandscapeTexturePatchEncodingSettings& Settings) {
}

void ULandscapeTexturePatch::SetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode) {
}

void ULandscapeTexturePatch::SetFalloffMode(ELandscapeTexturePatchFalloffMode FalloffModeIn) {
}

void ULandscapeTexturePatch::SetFalloff(float FalloffIn) {
}

void ULandscapeTexturePatch::SetEditVisibilityLayer(const FName& InWeightmapLayerName, const bool bEditVisibilityLayer) {
}

void ULandscapeTexturePatch::SetBlendMode(ELandscapeTexturePatchBlendMode BlendModeIn) {
}

void ULandscapeTexturePatch::ResetHeightEncodingMode(ELandscapeTextureHeightPatchEncoding EncodingMode) {
}

void ULandscapeTexturePatch::RequestReinitializeWeights() {
}

void ULandscapeTexturePatch::RequestReinitializeHeight() {
}

void ULandscapeTexturePatch::RemoveWeightPatch(const FName& InWeightmapLayerName) {
}

void ULandscapeTexturePatch::RemoveAllWeightPatches() {
}

UTexture* ULandscapeTexturePatch::GetWeightPatchTextureAsset(const FName& InWeightmapLayerName) {
    return NULL;
}

ELandscapeTexturePatchSourceMode ULandscapeTexturePatch::GetWeightPatchSourceMode(const FName& InWeightmapLayerName) {
    return ELandscapeTexturePatchSourceMode::None;
}

UTextureRenderTarget2D* ULandscapeTexturePatch::GetWeightPatchRenderTarget(const FName& InWeightmapLayerName, bool bMarkDirty) {
    return NULL;
}

FVector2D ULandscapeTexturePatch::GetUnscaledCoverage() const {
    return FVector2D{};
}

FVector2D ULandscapeTexturePatch::GetResolution() const {
    return FVector2D{};
}

FTransform ULandscapeTexturePatch::GetPatchToWorldTransform() const {
    return FTransform{};
}

bool ULandscapeTexturePatch::GetInitResolutionFromLandscape(float NewResolutionMultiplier, FVector2D& ResolutionOut) const {
    return false;
}

ELandscapeTexturePatchSourceMode ULandscapeTexturePatch::GetHeightSourceMode() const {
    return ELandscapeTexturePatchSourceMode::None;
}

UTextureRenderTarget2D* ULandscapeTexturePatch::GetHeightRenderTarget(bool bMarkDirty) {
    return NULL;
}

FVector2D ULandscapeTexturePatch::GetFullUnscaledWorldSize() const {
    return FVector2D{};
}

TArray<FName> ULandscapeTexturePatch::GetAllWeightPatchLayerNames() {
    return TArray<FName>();
}

void ULandscapeTexturePatch::DisableAllWeightPatches() {
}

void ULandscapeTexturePatch::ClearWeightPatchBlendModeOverride(const FName& InWeightmapLayerName) {
}

void ULandscapeTexturePatch::AddWeightPatch(const FName& InWeightmapLayerName, ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel) {
}


