#pragma once
#include "CoreMinimal.h"
#include "UsdAssetUserData.h"
#include "UsdMaterialAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USDCLASSES_API UUsdMaterialAssetUserData : public UUsdAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> ParameterToPrimvar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> PrimvarToUVIndex;
    
    UUsdMaterialAssetUserData();

};

