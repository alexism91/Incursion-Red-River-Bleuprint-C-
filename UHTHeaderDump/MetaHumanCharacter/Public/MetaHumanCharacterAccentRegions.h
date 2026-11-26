#pragma once
#include "CoreMinimal.h"
#include "MetaHumanCharacterAccentRegionProperties.h"
#include "MetaHumanCharacterAccentRegions.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanCharacterAccentRegions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegionProperties Scalp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegionProperties Forehead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegionProperties Nose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegionProperties UnderEye;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegionProperties Cheeks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegionProperties Lips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegionProperties Chin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterAccentRegionProperties Ears;
    
    METAHUMANCHARACTER_API FMetaHumanCharacterAccentRegions();
};

