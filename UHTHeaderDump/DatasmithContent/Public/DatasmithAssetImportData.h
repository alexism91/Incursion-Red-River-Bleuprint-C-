#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetImportData -FallbackName=AssetImportData
#include "DatasmithAssetImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDatasmithAssetImportData : public UAssetImportData {
    GENERATED_BODY()
public:
    UDatasmithAssetImportData();

};

