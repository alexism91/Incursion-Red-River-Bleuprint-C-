#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "MassProcessorClassCollection.generated.h"

class UMassProcessor;

USTRUCT(BlueprintType)
struct FMassProcessorClassCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMassProcessor>> ClassCollection;
    
    MASSENTITY_API FMassProcessorClassCollection();
};

