#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanCharacterSkinMaterialSlot.h"
#include "MetaHumanCharacterFaceMaterialSet.generated.h"

class UMaterialInstance;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterFaceMaterialSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMetaHumanCharacterSkinMaterialSlot, UMaterialInstance*> Skin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* EyeLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* EyeRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* EyeShell;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* LacrimalFluid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Teeth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* Eyelashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstance* EyelashesHiLods;
    
    FMetaHumanCharacterFaceMaterialSet();
};

