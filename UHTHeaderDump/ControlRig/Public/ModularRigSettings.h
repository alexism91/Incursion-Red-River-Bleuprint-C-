#pragma once
#include "CoreMinimal.h"
#include "ModularRigSettings.generated.h"

USTRUCT(BlueprintType)
struct FModularRigSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoResolve;
    
    CONTROLRIG_API FModularRigSettings();
};

