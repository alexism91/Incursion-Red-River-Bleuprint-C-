#include "MediaPlateComponent.h"

UMediaPlateComponent::UMediaPlateComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bPlayOnOpen = true;
    this->bAutoPlay = true;
    this->bEnableAudio = false;
    this->StartTime = 0.00f;
    this->SoundComponent = NULL;
    this->StaticMeshComponent = NULL;
    this->PlaylistIndex = 0;
    this->bIsMediaPlatePlaying = false;
    this->bPlayOnlyWhenVisible = false;
    this->bLoop = true;
    this->VisibleMipsTilesCalculations = EMediaTextureVisibleMipsTiles::Plane;
    this->MipMapBias = 0.00f;
    this->bIsAspectRatioAuto = true;
    this->bEnableMipMapUpscaling = false;
    this->MipLevelToUpscale = 16;
    this->bAdaptivePoleMipUpscaling = true;
    this->LetterboxAspectRatio = 0.00f;
    this->MediaPlayer = NULL;
    this->ExternalMediaSource = NULL;
    this->ActivePlaylist = NULL;
}

void UMediaPlateComponent::SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible) {
}

void UMediaPlateComponent::SetMeshRange(FVector2D InMeshRange) {
}

void UMediaPlateComponent::SetLoop(bool bInLoop) {
}

void UMediaPlateComponent::SetLetterboxAspectRatio(float AspectRatio) {
}

void UMediaPlateComponent::SetIsAspectRatioAuto(bool bInIsAspectRatioAuto) {
}

void UMediaPlateComponent::SetEnableAudio(bool bInEnableAudio) {
}

void UMediaPlateComponent::SelectMediaSourceAsset(const UMediaSource* InMediaSource) {
}

void UMediaPlateComponent::SelectMediaPlaylistAsset(const UMediaPlaylist* InMediaPlaylist) {
}

void UMediaPlateComponent::SelectExternalMedia(const FString& InFilePath) {
}

bool UMediaPlateComponent::Seek(const FTimespan& Time) {
    return false;
}

bool UMediaPlateComponent::Rewind() {
    return false;
}

bool UMediaPlateComponent::Previous() {
    return false;
}

void UMediaPlateComponent::Play() {
}

void UMediaPlateComponent::Pause() {
}

void UMediaPlateComponent::OpenLatent(const UObject* InWorldContextObject, FLatentActionInfo InLatentInfo, float InTimeout, bool bInWaitForTexture, bool& bOutSuccess) {
}

void UMediaPlateComponent::Open() {
}

void UMediaPlateComponent::OnMediaSuspended() {
}

void UMediaPlateComponent::OnMediaResumed() {
}

void UMediaPlateComponent::OnMediaOpened(const FString& DeviceUrl) {
}

void UMediaPlateComponent::OnMediaEnd() {
}

bool UMediaPlateComponent::Next() {
    return false;
}

bool UMediaPlateComponent::IsMediaPlatePlaying() const {
    return false;
}

bool UMediaPlateComponent::IsEventStateChangeAllowed(EMediaPlateEventState InRequestEventState) const {
    return false;
}

FVector2D UMediaPlateComponent::GetMeshRange() const {
    return FVector2D{};
}

UMediaTexture* UMediaPlateComponent::GetMediaTexture(int32 Index) {
    return NULL;
}

UMediaPlayer* UMediaPlateComponent::GetMediaPlayer() {
    return NULL;
}

bool UMediaPlateComponent::GetLoop() {
    return false;
}

float UMediaPlateComponent::GetLetterboxAspectRatio() {
    return 0.0f;
}

bool UMediaPlateComponent::GetIsAspectRatioAuto() const {
    return false;
}

void UMediaPlateComponent::Close() {
}


