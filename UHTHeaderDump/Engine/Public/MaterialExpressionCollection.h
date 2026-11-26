#pragma once
#include "CoreMinimal.h"
#include "MaterialExpressionCollection.generated.h"

class UMaterialExpression;
class UMaterialExpressionComment;

USTRUCT(BlueprintType)
struct FMaterialExpressionCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialExpression*> Expressions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialExpressionComment*> EditorComments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpression* ExpressionExecBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialExpression* ExpressionExecEnd;
    
    ENGINE_API FMaterialExpressionCollection();
};

