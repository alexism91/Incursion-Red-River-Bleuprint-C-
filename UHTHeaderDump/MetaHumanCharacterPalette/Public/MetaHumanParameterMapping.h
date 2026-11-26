#pragma once
#include "CoreMinimal.h"
#include "MetaHumanParameterMappingRow.h"
#include "MetaHumanParameterMapping.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanParameterMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanParameterMappingRow> Rows;
    
    FMetaHumanParameterMapping();
};

