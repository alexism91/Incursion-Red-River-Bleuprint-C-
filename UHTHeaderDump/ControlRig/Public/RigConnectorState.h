#pragma once
#include "CoreMinimal.h"
#include "RigConnectorSettings.h"
#include "RigElementKey.h"
#include "RigConnectorState.generated.h"

USTRUCT(BlueprintType)
struct FRigConnectorState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey ResolvedTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigConnectorSettings Settings;
    
    CONTROLRIG_API FRigConnectorState();
};

