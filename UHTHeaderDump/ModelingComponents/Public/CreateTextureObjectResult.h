#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.h"
#include "CreateTextureObjectResult.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FCreateTextureObjectResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreateModelingObjectResult ResultCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* NewAsset;
    
    MODELINGCOMPONENTS_API FCreateTextureObjectResult();
};

