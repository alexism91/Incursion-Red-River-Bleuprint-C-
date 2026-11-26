#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AGRDebuggerSettingsKey.h"
#include "AGRDebuggerSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class AGRPRO_API UAGRDebuggerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey ActivationKey;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategoryAnimState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategoryAimOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategoryRotation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategoryRuntime;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategoryMovement;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategoryState;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategoryLeans;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategorySetup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAGRDebuggerSettingsKey CategoryCustom;
    
    UAGRDebuggerSettings();

};

