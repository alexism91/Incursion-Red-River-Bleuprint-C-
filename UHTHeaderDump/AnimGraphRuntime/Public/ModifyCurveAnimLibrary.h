#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "EModifyCurveApplyMode.h"
#include "ModifyCurveAnimNodeReference.h"
#include "ModifyCurveAnimLibrary.generated.h"

UCLASS(Blueprintable)
class UModifyCurveAnimLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UModifyCurveAnimLibrary();

    UFUNCTION(BlueprintCallable)
    static FModifyCurveAnimNodeReference SetCurveMap(const FModifyCurveAnimNodeReference& ModifyCurveNode, const TMap<FName, float>& InCurveMap);
    
    UFUNCTION(BlueprintCallable)
    static FModifyCurveAnimNodeReference SetApplyMode(const FModifyCurveAnimNodeReference& ModifyCurveNode, EModifyCurveApplyMode InMode);
    
    UFUNCTION(BlueprintCallable)
    static FModifyCurveAnimNodeReference SetAlpha(const FModifyCurveAnimNodeReference& ModifyCurveNode, float InAlpha);
    
    UFUNCTION(BlueprintCallable)
    static EModifyCurveApplyMode GetApplyMode(const FModifyCurveAnimNodeReference& ModifyCurveNode);
    
    UFUNCTION(BlueprintCallable)
    static float GetAlpha(const FModifyCurveAnimNodeReference& ModifyCurveNode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToModifyCurveNodePure(const FAnimNodeReference& Node, FModifyCurveAnimNodeReference& ModifyCurveNode, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FModifyCurveAnimNodeReference ConvertToModifyCurveNode(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

