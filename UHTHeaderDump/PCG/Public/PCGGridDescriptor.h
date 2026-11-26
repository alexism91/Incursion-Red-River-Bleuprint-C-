#pragma once
#include "CoreMinimal.h"
#include "PCGGridDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FPCGGridDescriptor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 GridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIs2DGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsRuntime;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 RuntimeHash;
    
public:
    PCG_API FPCGGridDescriptor();
};

