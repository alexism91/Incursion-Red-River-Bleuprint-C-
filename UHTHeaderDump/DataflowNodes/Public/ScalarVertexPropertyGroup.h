#pragma once
#include "CoreMinimal.h"
#include "ScalarVertexPropertyGroup.generated.h"

USTRUCT(BlueprintType)
struct FScalarVertexPropertyGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    DATAFLOWNODES_API FScalarVertexPropertyGroup();
};

