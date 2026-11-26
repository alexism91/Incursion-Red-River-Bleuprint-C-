#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.h"
#include "CreateActorResult.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCreateActorResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreateModelingObjectResult ResultCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NewActor;
    
    MODELINGCOMPONENTS_API FCreateActorResult();
};

