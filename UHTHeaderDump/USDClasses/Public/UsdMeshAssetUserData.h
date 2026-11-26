#pragma once
#include "CoreMinimal.h"
#include "UsdAssetUserData.h"
#include "UsdPrimPathList.h"
#include "UsdMeshAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USDCLASSES_API UUsdMeshAssetUserData : public UUsdAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FUsdPrimPathList> MaterialSlotToPrimPaths;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> PrimvarToUVIndex;
    
    UUsdMeshAssetUserData();

};

