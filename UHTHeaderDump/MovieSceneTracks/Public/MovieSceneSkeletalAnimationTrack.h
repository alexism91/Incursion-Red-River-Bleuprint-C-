#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AnimGraphRuntime -ObjectName=ESwapRootBone -FallbackName=ESwapRootBone
#include "MovieSceneCommonAnimationTrack.h"
#include "MovieSceneSkeletalAnimationTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSkeletalAnimationTrack : public UMovieSceneCommonAnimationTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLegacySectionIndexBlend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESwapRootBone SwapRootBone;
    
    UMovieSceneSkeletalAnimationTrack();

    UFUNCTION(BlueprintCallable)
    void SetSwapRootBone(ESwapRootBone InValue);
    
    UFUNCTION(BlueprintCallable)
    ESwapRootBone GetSwapRootBone() const;
    
};

