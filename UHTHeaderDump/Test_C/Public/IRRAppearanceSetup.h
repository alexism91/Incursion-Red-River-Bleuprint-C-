#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "ClothingItem.h"
#include "IRRAppearanceSetup.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRAppearanceSetup : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothingItem> ClothingItems;
    
    UIRRAppearanceSetup();

};

