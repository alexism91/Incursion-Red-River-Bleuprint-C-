#pragma once
#include "CoreMinimal.h"
#include "VerseClassVarAccessor.h"
#include "VerseClassVarAccessors.generated.h"

USTRUCT(BlueprintType)
struct FVerseClassVarAccessors {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVerseClassVarAccessor> Getters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FVerseClassVarAccessor> Setters;
    
    COREUOBJECT_API FVerseClassVarAccessors();
};

