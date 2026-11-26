#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "DatasmithAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDatasmithAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> MetaData;
    
    UDatasmithAssetUserData();

};

