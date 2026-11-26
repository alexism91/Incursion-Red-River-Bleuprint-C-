#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieRenderPipelineCore -ObjectName=MovieGraphFileOutputNode -FallbackName=MovieGraphFileOutputNode
//CROSS-MODULE INCLUDE V2: -ModuleName=OpenColorIO -ObjectName=OpenColorIODisplayConfiguration -FallbackName=OpenColorIODisplayConfiguration
#include "MovieGraphImageSequenceOutputNode.generated.h"

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMovieGraphImageSequenceOutputNode : public UMovieGraphFileOutputNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_OCIOConfiguration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_OCIOContext: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenColorIODisplayConfiguration OCIOConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> OCIOContext;
    
    UMovieGraphImageSequenceOutputNode();

};

