#pragma once
#include "CoreMinimal.h"
#include "MetaHumanPaletteItemKey.h"
#include "MetaHumanBuildInputBase.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanBuildInputBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanPaletteItemKey EditorPreviewCharacter;
    
    METAHUMANCHARACTERPALETTE_API FMetaHumanBuildInputBase();
};

