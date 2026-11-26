#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeAnimationPayloadInterface.h"
#include "InterchangeMeshPayloadInterface.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeFbxTranslator.generated.h"

class UInterchangeFbxTranslatorSettings;

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeFbxTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface, public IInterchangeMeshPayloadInterface, public IInterchangeAnimationPayloadInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UInterchangeFbxTranslatorSettings* CacheFbxTranslatorSettings;
    
public:
    UInterchangeFbxTranslator();


    // Fix for true pure virtual functions not being implemented
};

