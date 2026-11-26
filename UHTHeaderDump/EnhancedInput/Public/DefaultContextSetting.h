#pragma once
#include "CoreMinimal.h"
#include "DefaultContextSetting.generated.h"

class UInputMappingContext;

USTRUCT(BlueprintType)
struct FDefaultContextSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UInputMappingContext> InputMappingContext;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddImmediately;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterWithUserSettings;
    
    ENHANCEDINPUT_API FDefaultContextSetting();
};

