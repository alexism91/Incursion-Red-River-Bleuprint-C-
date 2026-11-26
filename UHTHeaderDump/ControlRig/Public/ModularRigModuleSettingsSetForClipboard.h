#pragma once
#include "CoreMinimal.h"
#include "ModularRigModuleSettingsForClipboard.h"
#include "ModularRigModuleSettingsSetForClipboard.generated.h"

USTRUCT(BlueprintType)
struct FModularRigModuleSettingsSetForClipboard {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FModularRigModuleSettingsForClipboard> Settings;
    
    CONTROLRIG_API FModularRigModuleSettingsSetForClipboard();
};

