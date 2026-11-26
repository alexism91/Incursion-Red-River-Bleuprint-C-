#pragma once
#include "CoreMinimal.h"
#include "EDerivativeStatus.h"
#include "EMaterialDomain.h"
#include "EMaterialShaderFrequency.h"
#include "EMaterialValueTypeBridge.h"
#include "MaterialExternalCodeEnvironmentDefine.h"
#include "MaterialExternalCodeDeclaration.generated.h"

USTRUCT(BlueprintType)
struct FMaterialExternalCodeDeclaration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsInlined: 1;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialValueTypeBridge ReturnType;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Definition;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefinitionDDX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DefinitionDDY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDerivativeStatus Derivative;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialShaderFrequency ShaderFrequency;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EMaterialDomain>> Domains;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialExternalCodeEnvironmentDefine> EnvironmentDefines;
    
    ENGINE_API FMaterialExternalCodeDeclaration();
};

