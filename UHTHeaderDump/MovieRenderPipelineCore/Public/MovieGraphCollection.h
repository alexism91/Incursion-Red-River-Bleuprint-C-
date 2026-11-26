#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphEvaluationResult.h"
#include "MovieGraphCollection.generated.h"

class AActor;
class UMovieGraphConditionGroup;
class UWorld;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphCollection : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CollectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphConditionGroup*> ConditionGroups;
    
public:
    UMovieGraphCollection();

    UFUNCTION(BlueprintCallable)
    void SetCollectionName(const FString& InName);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveConditionGroup(UMovieGraphConditionGroup* InConditionGroup);
    
    UFUNCTION(BlueprintCallable)
    bool MoveConditionGroupToIndex(UMovieGraphConditionGroup* InConditionGroup, const int32 newIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphConditionGroup*> GetConditionGroups() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCollectionName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieGraphEvaluationResult EvaluateActorsAndComponents(const UWorld* InWorld) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<AActor*> Evaluate(const UWorld* InWorld) const;
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphConditionGroup* AddConditionGroup();
    
};

