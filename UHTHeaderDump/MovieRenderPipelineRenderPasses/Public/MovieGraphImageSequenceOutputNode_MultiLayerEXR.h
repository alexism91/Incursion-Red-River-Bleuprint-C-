#pragma once
#include "CoreMinimal.h"
#include "MovieGraphImageSequenceOutputNode_EXR.h"
#include "MovieGraphImageSequenceOutputNode_MultiLayerEXR.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINERENDERPASSES_API UMovieGraphImageSequenceOutputNode_MultiLayerEXR : public UMovieGraphImageSequenceOutputNode_EXR {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_bMultiPart: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMultipart;
    
    UMovieGraphImageSequenceOutputNode_MultiLayerEXR();

};

