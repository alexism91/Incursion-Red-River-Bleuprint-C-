#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterPalette.h"
#include "MetaHumanWardrobeItem.generated.h"

class UMetaHumanItemPipeline;
class UObject;

UCLASS(Blueprintable)
class METAHUMANCHARACTERPALETTE_API UMetaHumanWardrobeItem : public UMetaHumanCharacterPalette {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> PrincipalAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMetaHumanItemPipeline* pipeline;
    
public:
    UMetaHumanWardrobeItem();

};

