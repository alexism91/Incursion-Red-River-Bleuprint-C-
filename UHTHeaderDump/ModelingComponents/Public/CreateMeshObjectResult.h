#pragma once
#include "CoreMinimal.h"
#include "ECreateModelingObjectResult.h"
#include "CreateMeshObjectResult.generated.h"

class AActor;
class UObject;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FCreateMeshObjectResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECreateModelingObjectResult ResultCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* NewActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* NewComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* NewAsset;
    
    MODELINGCOMPONENTS_API FCreateMeshObjectResult();
};

