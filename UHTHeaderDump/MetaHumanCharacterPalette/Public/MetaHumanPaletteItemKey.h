#pragma once
#include "CoreMinimal.h"
#include "MetaHumanPaletteItemKey.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTERPALETTE_API FMetaHumanPaletteItemKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Variation;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> PrincipalAssetOrExternalWardrobeItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReferencesExternalWardrobeItem;
    
public:
    FMetaHumanPaletteItemKey();
};
FORCEINLINE uint32 GetTypeHash(const FMetaHumanPaletteItemKey) { return 0; }

