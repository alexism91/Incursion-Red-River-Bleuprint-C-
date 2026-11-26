#pragma once
#include "CoreMinimal.h"
#include "NaniteAssemblyNode.h"
#include "NaniteAssemblyPart.h"
#include "NaniteAssemblyData.generated.h"

USTRUCT(BlueprintType)
struct FNaniteAssemblyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNaniteAssemblyPart> Parts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNaniteAssemblyNode> Nodes;
    
    ENGINE_API FNaniteAssemblyData();
};

