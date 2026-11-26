#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HTNRuntimeSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Engine)
class HTN_API UHTNRuntimeSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableNodeInstancePooling;
    
    UHTNRuntimeSettings();

};

