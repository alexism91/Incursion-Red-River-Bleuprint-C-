#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetUserData -FallbackName=AssetUserData
#include "InterchangeLevelAssetUserData.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UInterchangeLevelAssetUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FSoftObjectPath> SceneImportPaths;
    
    UInterchangeLevelAssetUserData();

};

