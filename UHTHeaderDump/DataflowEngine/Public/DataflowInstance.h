#pragma once
#include "CoreMinimal.h"
#include "DataflowVariableOverrides.h"
#include "DataflowInstance.generated.h"

class UDataflow;
class UObject;

USTRUCT(BlueprintType)
struct FDataflowInstance {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflow* DataflowAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DataflowTerminal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowVariableOverrides VariableOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Owner;
    
public:
    DATAFLOWENGINE_API FDataflowInstance();
};

