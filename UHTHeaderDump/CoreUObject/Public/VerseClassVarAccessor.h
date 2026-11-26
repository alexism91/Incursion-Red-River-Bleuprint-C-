#pragma once
#include "CoreMinimal.h"
#include "VerseClassVarAccessor.generated.h"

class UFunction;

USTRUCT(BlueprintType)
struct FVerseClassVarAccessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFunction* Func;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInstanceMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFallible;
    
    COREUOBJECT_API FVerseClassVarAccessor();
};

