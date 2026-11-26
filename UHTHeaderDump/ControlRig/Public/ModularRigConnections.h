#pragma once
#include "CoreMinimal.h"
#include "ModularRigSingleConnection.h"
#include "ModularRigConnections.generated.h"

USTRUCT(BlueprintType)
struct FModularRigConnections {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FModularRigSingleConnection> ConnectionList;
    
public:
    CONTROLRIG_API FModularRigConnections();
};

