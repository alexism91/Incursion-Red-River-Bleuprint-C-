#pragma once
#include "CoreMinimal.h"
#include "ClusterUnionInitializationData.generated.h"

class UClusterUnionComponent;
class UPrimitiveComponent;

USTRUCT(BlueprintType)
struct FClusterUnionInitializationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UClusterUnionComponent* ClusterUnionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ProcessedComponents;
    
    ENGINE_API FClusterUnionInitializationData();
};

