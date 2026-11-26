#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "DataflowAnyType.h"
#include "DataflowTransformArrayTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowTransformArrayTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Value;
    
    DATAFLOWCORE_API FDataflowTransformArrayTypes();
};

