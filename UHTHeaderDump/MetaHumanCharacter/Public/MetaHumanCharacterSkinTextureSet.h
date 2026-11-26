#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanSDKRuntime -ObjectName=EBodyTextureType -FallbackName=EBodyTextureType
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanSDKRuntime -ObjectName=EFaceTextureType -FallbackName=EFaceTextureType
#include "MetaHumanCharacterSkinTextureSet.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct METAHUMANCHARACTER_API FMetaHumanCharacterSkinTextureSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaceTextureType, UTexture2D*> Face;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBodyTextureType, UTexture2D*> Body;
    
    FMetaHumanCharacterSkinTextureSet();
};

