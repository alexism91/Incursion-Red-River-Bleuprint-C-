#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=SoftObjectPath -FallbackName=SoftObjectPath
#include "DefaultMetaSoundAssetAutoUpdateSettings.generated.h"

USTRUCT(BlueprintType)
struct FDefaultMetaSoundAssetAutoUpdateSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSoftObjectPath MetaSound;
    
    METASOUNDENGINE_API FDefaultMetaSoundAssetAutoUpdateSettings();
};

