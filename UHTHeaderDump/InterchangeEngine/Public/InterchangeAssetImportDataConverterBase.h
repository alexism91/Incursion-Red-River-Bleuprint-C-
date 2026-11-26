#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeAssetImportDataConverterBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UInterchangeAssetImportDataConverterBase : public UObject {
    GENERATED_BODY()
public:
    UInterchangeAssetImportDataConverterBase();

};

