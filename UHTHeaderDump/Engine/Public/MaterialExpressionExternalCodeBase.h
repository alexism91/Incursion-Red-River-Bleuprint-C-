#pragma once
#include "CoreMinimal.h"
#include "MaterialExpression.h"
#include "MaterialExpressionExternalCodeBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI, Config=Engine)
class UMaterialExpressionExternalCodeBase : public UMaterialExpression {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExternalCodeIdentifiers;
    
    UMaterialExpressionExternalCodeBase();

};

