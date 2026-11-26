#pragma once
#include "CoreMinimal.h"
#include "MassProcessorExecutionOrder.generated.h"

USTRUCT(BlueprintType)
struct FMassProcessorExecutionOrder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExecuteInGroup;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExecuteBefore;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExecuteAfter;
    
    MASSENTITY_API FMassProcessorExecutionOrder();
};

