#pragma once
#include "CoreMinimal.h"
#include "ShaderCompilerSinglePermutationStat.generated.h"

USTRUCT(BlueprintType)
struct FShaderCompilerSinglePermutationStat {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 PermutationHash;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PermutationString;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Compiled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Cooked;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CompiledDouble;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CookedDouble;
    
    ENGINE_API FShaderCompilerSinglePermutationStat();
};

