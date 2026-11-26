#pragma once
#include "CoreMinimal.h"
#include "DataflowAnyType.h"
#include "DataflowStringArrayTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowStringArrayTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Value;
    
    DATAFLOWCORE_API FDataflowStringArrayTypes();
};

