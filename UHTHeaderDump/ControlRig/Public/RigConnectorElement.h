#pragma once
#include "CoreMinimal.h"
#include "RigBaseElement.h"
#include "RigConnectorSettings.h"
#include "RigConnectorElement.generated.h"

USTRUCT(BlueprintType)
struct FRigConnectorElement : public FRigBaseElement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigConnectorSettings Settings;
    
    CONTROLRIG_API FRigConnectorElement();
};

