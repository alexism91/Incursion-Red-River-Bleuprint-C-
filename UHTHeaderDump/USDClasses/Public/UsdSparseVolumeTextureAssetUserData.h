#pragma once
#include "CoreMinimal.h"
#include "UsdAssetUserData.h"
#include "UsdSparseVolumeTextureAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USDCLASSES_API UUsdSparseVolumeTextureAssetUserData : public UUsdAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SourceOpenVDBAssetPrimPaths;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<double> TimeSamplePathTimeCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TimeSamplePathIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> TimeSamplePaths;
    
    UUsdSparseVolumeTextureAssetUserData();

};

