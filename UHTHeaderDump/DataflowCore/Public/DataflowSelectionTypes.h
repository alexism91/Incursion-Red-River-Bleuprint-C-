#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowSelection.h"
#include "DataflowSelectionTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowSelectionTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataflowSelection Value;
    
    DATAFLOWCORE_API FDataflowSelectionTypes();
};

