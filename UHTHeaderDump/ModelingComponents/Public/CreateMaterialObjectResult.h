#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.h"
#include "CreateMaterialObjectResult.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCreateMaterialObjectResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreateModelingObjectResult ResultCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* NewAsset;
    
    MODELINGCOMPONENTS_API FCreateMaterialObjectResult();
};

