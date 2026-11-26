#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaHumanCharacterPaletteItem.h"
#include "MetaHumanCharacterPalette.generated.h"

UCLASS(Abstract, Blueprintable)
class METAHUMANCHARACTERPALETTE_API UMetaHumanCharacterPalette : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanCharacterPaletteItem> Items;
    
public:
    UMetaHumanCharacterPalette();

};

