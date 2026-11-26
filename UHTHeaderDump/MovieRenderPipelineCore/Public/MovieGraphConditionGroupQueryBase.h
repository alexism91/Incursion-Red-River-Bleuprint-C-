#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieGraphConditionGroupQueryOpType.h"
#include "MovieGraphConditionGroupQueryBase.generated.h"

class AActor;
class UActorComponent;
class UWorld;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphConditionGroupQueryBase : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieGraphConditionGroupQueryOpType OpType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEnabled;
    
public:
    UMovieGraphConditionGroupQueryBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldHidePropertyNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldEvaluateComponents() const;
    
    UFUNCTION(BlueprintCallable)
    void SetOperationType(const EMovieGraphConditionGroupQueryOpType OperationType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnabled(const bool bEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstConditionGroupQuery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEditorOnlyQuery() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieGraphConditionGroupQueryOpType GetOperationType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void EvaluateActorsAndComponents(const TArray<AActor*>& InActorsToQuery, const UWorld* InWorld, TSet<AActor*>& OutMatchingActors, TSet<UActorComponent*>& OutMatchingComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void Evaluate(const TArray<AActor*>& InActorsToQuery, const UWorld* InWorld, TSet<AActor*>& OutMatchingActors) const;
    
};

