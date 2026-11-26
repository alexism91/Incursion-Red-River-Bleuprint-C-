#pragma once
#include "CoreMinimal.h"
#include "MetaHumanParameterMappingInputColumnSet.h"
#include "MetaHumanParameterMappingOutputColumnSet.h"
#include "MetaHumanParameterMappingTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanParameterMappingTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanParameterMappingInputColumnSet> InputColumnSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanParameterMappingOutputColumnSet> OutputColumnSets;
    
    FMetaHumanParameterMappingTable();
};

