#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CoverBuildParams.h"
#include "CoverSystemSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class AICOVERSYSTEM_API UCoverSystemSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CoverDataPath;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CoverDataPrefix;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCoverBuildParams CoverBuildParams;
    
    UCoverSystemSettings();

};

