#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MovieGraphCollectionModifier.generated.h"

class UMovieGraphCollection;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphCollectionModifier : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphCollection*> Collections;
    
public:
    UMovieGraphCollectionModifier();

    UFUNCTION(BlueprintCallable)
    void SetCollections(const TArray<UMovieGraphCollection*> InCollections);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphCollection*> GetCollections() const;
    
    UFUNCTION(BlueprintCallable)
    void AddCollection(UMovieGraphCollection* Collection);
    
};

