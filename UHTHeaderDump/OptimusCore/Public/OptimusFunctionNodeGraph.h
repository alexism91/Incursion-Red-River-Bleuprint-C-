#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OptimusNodeSubGraph.h"
#include "OptimusFunctionNodeGraph.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AccessSpecifier;
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    UOptimusFunctionNodeGraph();

    UFUNCTION(BlueprintCallable)
    TArray<FName> GetAccessSpecifierOptions() const;
    
};

