#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterWardrobeIndividualAssets.generated.h"

class UMetaHumanWardrobeItem;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterWardrobeIndividualAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMetaHumanWardrobeItem>> Items;
    
    FMetaHumanCharacterWardrobeIndividualAssets();
};

