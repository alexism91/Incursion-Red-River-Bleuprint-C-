#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterAccentRegions.h"
#include "MetaHumanCharacterFrecklesProperties.h"
#include "MetaHumanCharacterSkinProperties.h"
#include "MetaHumanCharacterSkinTextureSoftSet.h"
#include "MetaHumanCharacterSkinSettings.generated.h"

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterSkinSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterSkinProperties Skin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterFrecklesProperties Freckles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegions Accents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTextureOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterSkinTextureSoftSet TextureOverrides;
    
    FMetaHumanCharacterSkinSettings();
};

