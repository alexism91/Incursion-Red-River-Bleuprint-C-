#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterIndividualAssets.generated.h"

class UMetaHumanCharacter;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterIndividualAssets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UMetaHumanCharacter>> Characters;
    
    FMetaHumanCharacterIndividualAssets();
};

