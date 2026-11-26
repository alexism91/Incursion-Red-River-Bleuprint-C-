#pragma once
#include "CoreMinimal.h"
#include "UsdAssetImportData.h"
#include "UsdAnimSequenceAssetImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USDCLASSES_API UUsdAnimSequenceAssetImportData : public UUsdAssetImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayerStartOffsetSeconds;
    
    UUsdAnimSequenceAssetImportData();

};

