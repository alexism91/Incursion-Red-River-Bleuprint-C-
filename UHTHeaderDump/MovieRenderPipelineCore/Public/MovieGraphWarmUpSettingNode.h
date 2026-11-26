#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphWarmUpSettingNode.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphWarmUpSettingNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_NumWarmUpFrames: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_bEmulateMotionBlur: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWarmUpFrames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEmulateMotionBlur;
    
    UMovieGraphWarmUpSettingNode();

};

