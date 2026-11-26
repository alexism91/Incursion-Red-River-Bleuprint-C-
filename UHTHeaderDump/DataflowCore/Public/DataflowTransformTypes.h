#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "DataflowAnyType.h"
#include "DataflowTransformTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowTransformTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Value;
    
    DATAFLOWCORE_API FDataflowTransformTypes();
};

