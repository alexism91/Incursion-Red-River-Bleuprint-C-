#pragma once
#include "CoreMinimal.h"
#include "MovieGraphNode.h"
#include "Templates/SubclassOf.h"
#include "MovieGraphRemoveRenderSettingNode.generated.h"

class UMovieGraphSettingNode;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphRemoveRenderSettingNode : public UMovieGraphNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMovieGraphSettingNode> NodeType;
    
    UMovieGraphRemoveRenderSettingNode();

};

