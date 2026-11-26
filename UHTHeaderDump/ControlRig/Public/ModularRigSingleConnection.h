#pragma once
#include "CoreMinimal.h"
#include "RigElementKey.h"
#include "ModularRigSingleConnection.generated.h"

USTRUCT(BlueprintType)
struct FModularRigSingleConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Connector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Targets;
    
    CONTROLRIG_API FModularRigSingleConnection();
};

