#pragma once
#include "CoreMinimal.h"
#include "MeshBlendPooledActors.generated.h"

class UMeshComponent;

USTRUCT(BlueprintType)
struct MESHBLEND_API FMeshBlendPooledActors {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TWeakObjectPtr<UMeshComponent>, int32> BoundMeshComponents;
    
public:
    FMeshBlendPooledActors();
};

