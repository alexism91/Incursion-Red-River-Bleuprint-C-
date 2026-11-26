#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EDataLayerRuntimeState -FallbackName=EDataLayerRuntimeState
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
#include "MovieSceneDataLayerSection.generated.h"

class UDataLayerAsset;

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneDataLayerSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataLayerAsset*> DataLayerAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataLayerRuntimeState DesiredState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataLayerRuntimeState PrerollState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushOnActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlushOnUnload;
    
public:
    UMovieSceneDataLayerSection();

    UFUNCTION(BlueprintCallable)
    void SetPrerollState(EDataLayerRuntimeState InPrerollState);
    
    UFUNCTION(BlueprintCallable)
    void SetFlushOnUnload(bool NewBFlushOnUnload);
    
    UFUNCTION(BlueprintCallable)
    void SetFlushOnActivated(bool NewBFlushOnActivated);
    
    UFUNCTION(BlueprintCallable)
    void SetDesiredState(EDataLayerRuntimeState InDesiredState);
    
    UFUNCTION(BlueprintCallable)
    void SetDataLayerAssets(const TArray<UDataLayerAsset*>& InDataLayerAssets);
    
private:
    UFUNCTION(BlueprintCallable)
    bool HasPreRoll() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetPrerollState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlushOnUnload() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetFlushOnActivated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerRuntimeState GetDesiredState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UDataLayerAsset*> GetDataLayerAssets() const;
    

    // Fix for true pure virtual functions not being implemented
};

