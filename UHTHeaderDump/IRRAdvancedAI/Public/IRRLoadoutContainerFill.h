#pragma once
#include "CoreMinimal.h"
#include "IRRLoadoutTagWeight.h"
#include "IRRLoadoutContainerFill.generated.h"

USTRUCT(BlueprintType)
struct IRRADVANCEDAI_API FIRRLoadoutContainerFill {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRLoadoutTagWeight> ItemWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxItems;
    
    FIRRLoadoutContainerFill();
};

