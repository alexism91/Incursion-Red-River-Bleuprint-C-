#pragma once
#include "CoreMinimal.h"
#include "MetaHumanParameterMapping.h"
#include "MetaHumanScalabilityValueSet.h"
#include "MetaHumanCompiledParameterMappingTable.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanCompiledParameterMappingTable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanParameterMapping> Mappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMetaHumanScalabilityValueSet> ReachableScalabilityValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetPlatformName;
    
public:
    FMetaHumanCompiledParameterMappingTable();
};

