#pragma once
#include "CoreMinimal.h"
#include "MetaHumanParameterMappingOutputColumnSet.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanParameterMappingOutputColumnSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NameColumn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ValueColumns;
    
    FMetaHumanParameterMappingOutputColumnSet();
};

