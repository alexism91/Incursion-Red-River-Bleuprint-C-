#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "InterchangeAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangeAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> MetaData;
    
    UInterchangeAssetUserData();

};

