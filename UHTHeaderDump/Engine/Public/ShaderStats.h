#pragma once
#include "CoreMinimal.h"
#include "ShaderCompilerSinglePermutationStat.h"
#include "ShaderStats.generated.h"

USTRUCT(BlueprintType)
struct FShaderStats {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShaderCompilerSinglePermutationStat> PermutationCompilations;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Compiled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Cooked;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CompiledDouble;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CookedDouble;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CompileTime;
    
    ENGINE_API FShaderStats();
};

