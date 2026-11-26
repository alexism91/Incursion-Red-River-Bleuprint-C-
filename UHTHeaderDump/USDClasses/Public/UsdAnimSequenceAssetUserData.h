#pragma once
#include "CoreMinimal.h"
#include "UsdAssetUserData.h"
#include "UsdAnimSequenceAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class USDCLASSES_API UUsdAnimSequenceAssetUserData : public UUsdAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LayerStartOffsetSeconds;
    
    UUsdAnimSequenceAssetUserData();

};

