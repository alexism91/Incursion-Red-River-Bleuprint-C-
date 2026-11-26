#pragma once
#include "CoreMinimal.h"
#include "MetaHumanPaletteItemPath.h"
#include "MetaHumanPipelineBuiltData.h"
#include "MetaHumanPaletteBuiltData.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanPaletteBuiltData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FMetaHumanPaletteItemPath, FMetaHumanPipelineBuiltData> ItemBuiltData;
    
    FMetaHumanPaletteBuiltData();
};

