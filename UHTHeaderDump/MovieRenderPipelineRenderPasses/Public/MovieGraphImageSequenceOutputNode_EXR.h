#pragma once
#include "CoreMinimal.h"
#include "EEXRCompressionFormat.h"
#include "MovieGraphImageSequenceOutputNode.h"
#include "MovieGraphImageSequenceOutputNode_EXR.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMovieGraphImageSequenceOutputNode_EXR : public UMovieGraphImageSequenceOutputNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Compression: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EEXRCompressionFormat Compression;
    
    UMovieGraphImageSequenceOutputNode_EXR();

};

