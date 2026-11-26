#pragma once
#include "CoreMinimal.h"
#include "MetaHumanScalabilityValueSet.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanScalabilityValueSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Values;
    
    FMetaHumanScalabilityValueSet();
};

