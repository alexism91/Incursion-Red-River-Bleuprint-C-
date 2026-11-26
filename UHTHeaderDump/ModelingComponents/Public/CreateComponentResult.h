#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.h"
#include "CreateComponentResult.generated.h"

class UActorComponent;

USTRUCT(BlueprintType)
struct FCreateComponentResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreateModelingObjectResult ResultCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActorComponent* NewComponent;
    
    MODELINGCOMPONENTS_API FCreateComponentResult();
};

