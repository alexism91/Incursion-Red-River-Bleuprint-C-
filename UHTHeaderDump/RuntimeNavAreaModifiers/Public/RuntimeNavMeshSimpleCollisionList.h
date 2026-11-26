#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "RuntimeNavMeshSimpleCollisionList.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeNavMeshSimpleCollisionList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTransform> Transforms;
    
    RUNTIMENAVAREAMODIFIERS_API FRuntimeNavMeshSimpleCollisionList();
};

