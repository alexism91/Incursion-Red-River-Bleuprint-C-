#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeAnimationPayloadInterface.h"
#include "InterchangeMeshPayloadInterface.h"
#include "InterchangeTextureLightProfilePayloadInterface.h"
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeVariantSetPayloadInterface.h"
#include "InterchangeGLTFTranslator.generated.h"

UCLASS(Blueprintable)
class UInterchangeGLTFTranslator : public UInterchangeTranslatorBase, public IInterchangeMeshPayloadInterface, public IInterchangeTexturePayloadInterface, public IInterchangeAnimationPayloadInterface, public IInterchangeVariantSetPayloadInterface, public IInterchangeTextureLightProfilePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeGLTFTranslator();


    // Fix for true pure virtual functions not being implemented
};

