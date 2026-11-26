#pragma once
#include "CoreMinimal.h"
#include "MetaHumanPaletteItemKey.h"
#include "MetaHumanPaletteItemPath.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanPaletteItemPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanPaletteItemKey> ParentItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanPaletteItemKey Item;
    
public:
    FMetaHumanPaletteItemPath();
};
FORCEINLINE uint32 GetTypeHash(const FMetaHumanPaletteItemPath) { return 0; }

