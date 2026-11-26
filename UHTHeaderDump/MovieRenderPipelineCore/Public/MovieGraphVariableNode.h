#pragma once
#include "CoreMinimal.h"
#include "MovieGraphNode.h"
#include "MovieGraphPinProperties.h"
#include "MovieGraphVariableNode.generated.h"

class UMovieGraphVariable;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphVariableNode : public UMovieGraphNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMovieGraphVariable* GraphVariable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieGraphPinProperties OutputPin;
    
public:
    UMovieGraphVariableNode();

    UFUNCTION(BlueprintCallable)
    void SetVariable(UMovieGraphVariable* InVariable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphVariable* GetVariable() const;
    
};

