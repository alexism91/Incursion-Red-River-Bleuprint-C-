#pragma once
#include "CoreMinimal.h"
#include "UsdAssetImportData.h"
#include "UsdPrimPathList.h"
#include "UsdMeshAssetImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USDCLASSES_API UUsdMeshAssetImportData : public UUsdAssetImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUsdPrimPathList> MaterialSlotToPrimPaths;
    
    UUsdMeshAssetImportData();

};

