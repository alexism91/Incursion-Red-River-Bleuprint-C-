#pragma once
#include "CoreMinimal.h"
#include "EMaterialShaderFrequency.h"
#include "MaterialExternalCodeEnvironmentDefine.generated.h"

USTRUCT(BlueprintType)
struct FMaterialExternalCodeEnvironmentDefine {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialShaderFrequency ShaderFrequency;
    
    ENGINE_API FMaterialExternalCodeEnvironmentDefine();
};

