#pragma once
#include "CoreMinimal.h"
#include "MovieGraphMember.h"
#include "MovieGraphVariable.generated.h"

UCLASS(Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphVariable : public UMovieGraphMember {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Category;
    
public:
    UMovieGraphVariable();

    UFUNCTION(BlueprintCallable)
    void SetCategory(const FString& InNewCategory);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGlobal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCategory() const;
    
};

