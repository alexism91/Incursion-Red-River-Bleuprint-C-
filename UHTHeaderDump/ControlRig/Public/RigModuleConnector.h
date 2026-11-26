#pragma once
#include "CoreMinimal.h"
#include "RigConnectorSettings.h"
#include "RigModuleConnector.generated.h"

USTRUCT(BlueprintType)
struct FRigModuleConnector {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigConnectorSettings Settings;
    
    CONTROLRIG_API FRigModuleConnector();
};

