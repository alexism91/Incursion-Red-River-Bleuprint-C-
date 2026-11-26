#pragma once
#include "CoreMinimal.h"
#include "UsdMeshAssetUserData.h"
#include "UsdGeometryCacheAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USDCLASSES_API UUsdGeometryCacheAssetUserData : public UUsdMeshAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayerStartOffsetSeconds;
    
    UUsdGeometryCacheAssetUserData();

};

