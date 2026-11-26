#pragma once
#include "CoreMinimal.h"
#include "EPCGSelectGrammarComparator.h"
#include "PCGSelectGrammarCriterion.generated.h"

USTRUCT(BlueprintType)
struct FPCGSelectGrammarCriterion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSelectGrammarComparator Comparator;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double FirstValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double SecondValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Grammar;
    
    PCG_API FPCGSelectGrammarCriterion();
};

