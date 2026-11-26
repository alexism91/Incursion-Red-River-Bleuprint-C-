#pragma once
#include "CoreMinimal.h"
#include "DatasmithAssetImportData.h"
#include "DatasmithStaticMeshImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDatasmithStaticMeshImportData : public UDatasmithAssetImportData {
    GENERATED_BODY()
public:
    UDatasmithStaticMeshImportData();

};

