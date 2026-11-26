#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetImportData -FallbackName=AssetImportData
#include "GroomAssetImportData.generated.h"

class UGroomCreateStrandsTexturesOptions;
class UGroomImportOptions;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGroomAssetImportData : public UAssetImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomImportOptions* ImportOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGroomCreateStrandsTexturesOptions* HairStrandsTexturesOptions;
    
    UGroomAssetImportData();

};

