#pragma once
#include "CoreMinimal.h"
#include "MovieGraphNode.h"
#include "MovieGraphSelectNode.generated.h"

class UMovieGraphValueContainer;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphSelectNode : public UMovieGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieGraphValueContainer* SelectOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMovieGraphValueContainer* SelectedOption;
    
public:
    UMovieGraphSelectNode();

};

