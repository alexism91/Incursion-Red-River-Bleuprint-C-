#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeWriterBase -FallbackName=InterchangeWriterBase
#include "InterchangeTextureWriter.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeTextureWriter : public UInterchangeWriterBase {
    GENERATED_BODY()
public:
    UInterchangeTextureWriter();

};

