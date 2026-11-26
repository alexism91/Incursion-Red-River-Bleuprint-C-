#pragma once
#include "CoreMinimal.h"
#include "MeshDeformerInstanceSet.generated.h"

class UMeshDeformerInstance;

USTRUCT(BlueprintType)
struct FMeshDeformerInstanceSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMeshDeformerInstance*> DeformerInstances;
    
    ENGINE_API FMeshDeformerInstanceSet();
};

