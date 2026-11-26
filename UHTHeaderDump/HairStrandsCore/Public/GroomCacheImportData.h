#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetImportData -FallbackName=AssetImportData
#include "GroomCacheImportSettings.h"
#include "GroomCacheImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UGroomCacheImportData : public UAssetImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGroomCacheImportSettings Settings;
    
    UGroomCacheImportData();

};

