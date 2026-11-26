#pragma once
#include "CoreMinimal.h"
#include "NiagaraBakerOutput.h"
#include "NiagaraBakerTextureSource.h"
#include "NiagaraParameterBinding.h"
#include "NiagaraBakerOutputSparseVolumeTexture.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNiagaraBakerOutputSparseVolumeTexture : public UNiagaraBakerOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraBakerTextureSource SourceBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraParameterBinding VolumeWorldSpaceSizeBinding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SparseVolumeTextureAssetPathFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLoopedOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LoopedSparseVolumeTextureAssetPathFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendDuration;
    
    UNiagaraBakerOutputSparseVolumeTexture();

};

