#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "MetaHumanGeneratedAssetMetadata.h"
#include "MetaHumanInstanceParameterOutput.h"
#include "MetaHumanPaletteItemPath.h"
#include "MetaHumanAssemblyOutput.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanAssemblyOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct PipelineAssemblyOutput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanGeneratedAssetMetadata> MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMetaHumanPaletteItemPath, FMetaHumanInstanceParameterOutput> InstanceParameters;
    
    FMetaHumanAssemblyOutput();
};

