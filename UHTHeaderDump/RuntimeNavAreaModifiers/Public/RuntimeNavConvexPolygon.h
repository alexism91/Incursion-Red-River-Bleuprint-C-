#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "RuntimeNavConvexPolygon.generated.h"

USTRUCT(BlueprintType)
struct FRuntimeNavConvexPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVector> Vertices;
    
    RUNTIMENAVAREAMODIFIERS_API FRuntimeNavConvexPolygon();
};

