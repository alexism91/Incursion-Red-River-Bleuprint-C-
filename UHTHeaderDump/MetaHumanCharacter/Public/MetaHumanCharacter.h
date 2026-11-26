#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanCharacterPalette -ObjectName=MetaHumanPaletteItemKey -FallbackName=MetaHumanPaletteItemKey
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanSDKRuntime -ObjectName=EBodyTextureType -FallbackName=EBodyTextureType
//CROSS-MODULE INCLUDE V2: -ModuleName=MetaHumanSDKRuntime -ObjectName=EFaceTextureType -FallbackName=EFaceTextureType
#include "EMetaHumanCharacterTemplateType.h"
#include "MetaHumanCharacterEyesSettings.h"
#include "MetaHumanCharacterFaceEvaluationSettings.h"
#include "MetaHumanCharacterHeadModelSettings.h"
#include "MetaHumanCharacterMakeupSettings.h"
#include "MetaHumanCharacterSkinSettings.h"
#include "MetaHumanCharacterTextureInfo.h"
#include "MetaHumanCharacterViewportSettings.h"
#include "MetaHumanCharacter.generated.h"

class UMetaHumanCollection;
class UTexture2D;

UCLASS(Blueprintable)
class METAHUMANCHARACTER_API UMetaHumanCharacter : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaHumanCharacterTemplateType TemplateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterFaceEvaluationSettings FaceEvaluationSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterHeadModelSettings HeadModelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterSkinSettings SkinSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterEyesSettings EyesSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterMakeupSettings MakeupSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasHighResolutionTextures;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFixedBodyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFaceTextureType, FMetaHumanCharacterTextureInfo> SynthesizedFaceTexturesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EFaceTextureType, UTexture2D*> SynthesizedFaceTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EBodyTextureType, FMetaHumanCharacterTextureInfo> HighResBodyTexturesInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<EBodyTextureType, UTexture2D*> BodyTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanCharacterViewportSettings ViewportSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMetaHumanCollection* InternalCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanPaletteItemKey InternalCollectionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasFaceDNABlendshapes;
    
public:
    UMetaHumanCharacter();

};

