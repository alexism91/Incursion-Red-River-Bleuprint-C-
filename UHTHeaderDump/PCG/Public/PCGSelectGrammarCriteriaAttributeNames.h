#pragma once
#include "CoreMinimal.h"
#include "PCGSelectGrammarCriteriaAttributeNames.generated.h"

USTRUCT(BlueprintType)
struct FPCGSelectGrammarCriteriaAttributeNames {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName KeyAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComparatorAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FirstValueAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SecondValueAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GrammarAttributeName;
    
    PCG_API FPCGSelectGrammarCriteriaAttributeNames();
};

