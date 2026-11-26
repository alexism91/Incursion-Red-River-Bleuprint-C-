#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Timespan -FallbackName=Timespan
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=EMediaTextureVisibleMipsTiles -FallbackName=EMediaTextureVisibleMipsTiles
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaPlayerProxyInterface -FallbackName=MediaPlayerProxyInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=MediaAssets -ObjectName=MediaSourceCacheSettings -FallbackName=MediaSourceCacheSettings
#include "EMediaPlateEventState.h"
#include "MediaPlateResource.h"
#include "MediaTextureResourceSettings.h"
#include "MediaPlateComponent.generated.h"

class UMediaPlayer;
class UMediaPlaylist;
class UMediaSoundComponent;
class UMediaSource;
class UMediaTexture;
class UObject;
class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMediaPlateComponent : public UActorComponent, public IMediaPlayerProxyInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> Letterboxes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaPlateResource MediaPlateResource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlaylistIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaSourceCacheSettings CacheSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsMediaPlatePlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayOnlyWhenVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMediaTextureVisibleMipsTiles VisibleMipsTilesCalculations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MipMapBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAspectRatioAuto;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableMipMapUpscaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MipLevelToUpscale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAdaptivePoleMipUpscaling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LetterboxAspectRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MeshRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMediaTexture*> MediaTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMediaTextureResourceSettings MediaTextureSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaSource* ExternalMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMediaPlaylist* ActivePlaylist;
    
public:
    UMediaPlateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlayOnlyWhenVisible(bool bInPlayOnlyWhenVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshRange(FVector2D InMeshRange);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool bInLoop);
    
    UFUNCTION(BlueprintCallable)
    void SetLetterboxAspectRatio(float AspectRatio);
    
    UFUNCTION(BlueprintCallable)
    void SetIsAspectRatioAuto(bool bInIsAspectRatioAuto);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableAudio(bool bInEnableAudio);
    
    UFUNCTION(BlueprintCallable)
    void SelectMediaSourceAsset(const UMediaSource* InMediaSource);
    
    UFUNCTION(BlueprintCallable)
    void SelectMediaPlaylistAsset(const UMediaPlaylist* InMediaPlaylist);
    
    UFUNCTION(BlueprintCallable)
    void SelectExternalMedia(const FString& InFilePath);
    
    UFUNCTION(BlueprintCallable)
    bool Seek(const FTimespan& Time);
    
    UFUNCTION(BlueprintCallable)
    bool Rewind();
    
    UFUNCTION(BlueprintCallable)
    bool Previous();
    
    UFUNCTION(BlueprintCallable)
    void Play();
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="InLatentInfo", WorldContext="InWorldContextObject"))
    void OpenLatent(const UObject* InWorldContextObject, FLatentActionInfo InLatentInfo, float InTimeout, bool bInWaitForTexture, bool& bOutSuccess);
    
    UFUNCTION(BlueprintCallable)
    void Open();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMediaSuspended();
    
    UFUNCTION(BlueprintCallable)
    void OnMediaResumed();
    
    UFUNCTION(BlueprintCallable)
    void OnMediaOpened(const FString& DeviceUrl);
    
    UFUNCTION(BlueprintCallable)
    void OnMediaEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    bool Next();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMediaPlatePlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventStateChangeAllowed(EMediaPlateEventState InRequestEventState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMeshRange() const;
    
    UFUNCTION(BlueprintCallable)
    UMediaTexture* GetMediaTexture(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    UMediaPlayer* GetMediaPlayer();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoop();
    
    UFUNCTION(BlueprintCallable)
    float GetLetterboxAspectRatio();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsAspectRatioAuto() const;
    
    UFUNCTION(BlueprintCallable)
    void Close();
    

    // Fix for true pure virtual functions not being implemented
};

