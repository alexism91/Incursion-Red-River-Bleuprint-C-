#pragma once
#include "CoreMinimal.h"
#include "MovieGraphPinProperties.h"
#include "MovieGraphSettingNode.h"
#include "MovieGraphRerouteNode.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphRerouteNode : public UMovieGraphSettingNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieGraphPinProperties InputOutputProperties;
    
public:
    UMovieGraphRerouteNode();

    UFUNCTION(BlueprintCallable)
    void SetPinProperties(const FMovieGraphPinProperties& InPinProperties);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieGraphPinProperties GetPinProperties() const;
    
};

