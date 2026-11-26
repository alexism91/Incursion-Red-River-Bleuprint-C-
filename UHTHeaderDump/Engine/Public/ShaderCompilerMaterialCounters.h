#pragma once
#include "CoreMinimal.h"
#include "ShaderCompilerMaterialCounters.generated.h"

USTRUCT(BlueprintType)
struct FShaderCompilerMaterialCounters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialTranslateCalls;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaterialTranslateTotalTimeSec;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaterialTranslateTranslationOnlyTimeSec;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MaterialTranslateSerializationOnlyTimeSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialCacheHits;
    
    ENGINE_API FShaderCompilerMaterialCounters();
};

