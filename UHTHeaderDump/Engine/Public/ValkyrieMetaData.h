#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ValkyrieMetaData.generated.h"

UCLASS(Blueprintable, DefaultConfig, MinimalAPI, Config=Editor)
class UValkyrieMetaData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DevelopmentStatusKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DeprecationStatusKey;
    
    UValkyrieMetaData();

};

