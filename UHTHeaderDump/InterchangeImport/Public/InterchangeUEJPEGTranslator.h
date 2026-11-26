#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeTranslatorBase -FallbackName=InterchangeTranslatorBase
#include "InterchangeTexturePayloadInterface.h"
#include "InterchangeUEJPEGTranslator.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeUEJPEGTranslator : public UInterchangeTranslatorBase, public IInterchangeTexturePayloadInterface {
    GENERATED_BODY()
public:
    UInterchangeUEJPEGTranslator();


    // Fix for true pure virtual functions not being implemented
};

