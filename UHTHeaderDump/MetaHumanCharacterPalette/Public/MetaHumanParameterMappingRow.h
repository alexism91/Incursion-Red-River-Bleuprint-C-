#pragma once
#include "CoreMinimal.h"
#include "MetaHumanParameterMappingInput.h"
#include "MetaHumanParameterValue.h"
#include "MetaHumanParameterMappingRow.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanParameterMappingRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanParameterMappingInput> InputParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanParameterValue Value;
    
    FMetaHumanParameterMappingRow();
};

