#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector4 -FallbackName=Vector4
#include "DataflowAnyType.h"
#include "DataflowVectorArrayTypes.generated.h"

USTRUCT(BlueprintType)
struct FDataflowVectorArrayTypes : public FDataflowAnyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector4> Value;
    
    DATAFLOWCORE_API FDataflowVectorArrayTypes();
};

