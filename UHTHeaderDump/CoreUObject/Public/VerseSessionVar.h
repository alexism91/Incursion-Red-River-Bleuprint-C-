#pragma once
#include "CoreMinimal.h"
#include "VerseSessionVar.generated.h"

USTRUCT(BlueprintType)
struct FVerseSessionVar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FMapProperty> Property;
    
    COREUOBJECT_API FVerseSessionVar();
};

