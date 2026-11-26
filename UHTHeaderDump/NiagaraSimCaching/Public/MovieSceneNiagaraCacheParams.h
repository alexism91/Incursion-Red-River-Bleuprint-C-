#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EPerQualityLevels -FallbackName=EPerQualityLevels
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneBaseCacheParams -FallbackName=MovieSceneBaseCacheParams
//CROSS-MODULE INCLUDE V2: -ModuleName=Niagara -ObjectName=NiagaraSimCacheCreateParameters -FallbackName=NiagaraSimCacheCreateParameters
#include "ENiagaraSimCacheSectionPlayMode.h"
#include "ENiagaraSimCacheSectionStretchMode.h"
#include "MovieSceneNiagaraCacheParams.generated.h"

class UNiagaraSimCache;

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraCacheParams : public FMovieSceneBaseCacheParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNiagaraSimCacheCreateParameters CacheParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSimCache* SimCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockCacheToReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideQualityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPerQualityLevels RecordQualityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSimCacheSectionPlayMode CacheReplayPlayMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENiagaraSimCacheSectionStretchMode SectionStretchMode;
    
    NIAGARASIMCACHING_API FMovieSceneNiagaraCacheParams();
};

