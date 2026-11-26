#pragma once
#include "CoreMinimal.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphCollectionNode.generated.h"

class UMovieGraphCollection;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphCollectionNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverride_Collection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphCollection* Collection;
    
    UMovieGraphCollectionNode();

};

