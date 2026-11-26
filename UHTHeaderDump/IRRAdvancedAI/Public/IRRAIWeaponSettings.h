#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "IRRAICategorySettingsBase.h"
#include "IRRAIWeaponClassSettings.h"
#include "IRRAIWeaponSettings.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRAIWeaponSettings : public FIRRAICategorySettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FIRRAIWeaponClassSettings> WeaponClassSettingsMap;
    
    FIRRAIWeaponSettings();
};

