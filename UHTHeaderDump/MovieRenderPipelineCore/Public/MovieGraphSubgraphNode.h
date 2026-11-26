#pragma once
#include "CoreMinimal.h"
#include "MovieGraphNode.h"
#include "MovieGraphSubgraphNode.generated.h"

class UMovieGraphConfig;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphSubgraphNode : public UMovieGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMovieGraphConfig> SubgraphAsset;
    
public:
    UMovieGraphSubgraphNode();

    UFUNCTION(BlueprintCallable)
    void SetSubGraphAsset(const TSoftObjectPtr<UMovieGraphConfig>& InSubgraphAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphConfig* GetSubgraphAsset() const;
    
};

