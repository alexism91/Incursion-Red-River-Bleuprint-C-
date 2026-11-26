#pragma once
#include "CoreMinimal.h"
#include "MassProcessorClassCollection.h"
#include "MassEntityObserverClassesMap.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FMassEntityObserverClassesMap {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UScriptStruct*, FMassProcessorClassCollection> Container;
    
public:
    MASSENTITY_API FMassEntityObserverClassesMap();
};

