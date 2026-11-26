#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieGraphConditionGroupOpType.h"
#include "MovieGraphEvaluationResult.h"
#include "Templates/SubclassOf.h"
#include "MovieGraphConditionGroup.generated.h"

class AActor;
class UMovieGraphConditionGroupQueryBase;
class UWorld;

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroup : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphConditionGroupOpType OpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphConditionGroupQueryBase*> Queries;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieGraphEvaluationResult QueryResult;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMovieGraphEvaluationResult EvaluationResult;
    
public:
    UMovieGraphConditionGroup();

    UFUNCTION(BlueprintCallable)
    void SetOperationType(const EMovieGraphConditionGroupOpType OperationType);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveQuery(UMovieGraphConditionGroupQueryBase* InQuery);
    
    UFUNCTION(BlueprintCallable)
    bool MoveQueryToIndex(UMovieGraphConditionGroupQueryBase* InQuery, const int32 newIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstConditionGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphConditionGroupQueryBase*> GetQueries() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieGraphConditionGroupOpType GetOperationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMovieGraphEvaluationResult EvaluateActorsAndComponents(const UWorld* InWorld) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<AActor*> Evaluate(const UWorld* InWorld) const;
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphConditionGroupQueryBase* DuplicateQuery(const int32 QueryIndex);
    
    UFUNCTION(BlueprintCallable)
    UMovieGraphConditionGroupQueryBase* AddQuery(const TSubclassOf<UMovieGraphConditionGroupQueryBase>& InQueryType, const int32 InsertIndex);
    
};

