#pragma once
#include "CoreMinimal.h"
#include "MassRuntimePipeline.h"
#include "MassObserversMap.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FMassObserversMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UScriptStruct*, FMassRuntimePipeline> Container;
    
public:
    MASSENTITY_API FMassObserversMap();
};

