#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionConvertInput.h"
#include "MaterialExpressionConvertMapping.h"
#include "MaterialExpressionConvertOutput.h"
#include "MaterialExpressionConvert.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMaterialExpressionConvert : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialExpressionConvertInput> ConvertInputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialExpressionConvertOutput> ConvertOutputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMaterialExpressionConvertMapping> ConvertMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeName;
    
    UMaterialExpressionConvert();

};

