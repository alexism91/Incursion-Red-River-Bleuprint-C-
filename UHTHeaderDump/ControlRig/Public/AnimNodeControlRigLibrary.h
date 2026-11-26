#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNodeReference -FallbackName=AnimNodeReference
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EAnimNodeReferenceConversionResult -FallbackName=EAnimNodeReferenceConversionResult
#include "ControlRigReference.h"
#include "Templates/SubclassOf.h"
#include "AnimNodeControlRigLibrary.generated.h"

class UControlRig;

UCLASS(Blueprintable, MinimalAPI)
class UAnimNodeControlRigLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UAnimNodeControlRigLibrary();

    UFUNCTION(BlueprintCallable)
    static FControlRigReference SetControlRigClass(const FControlRigReference& Node, TSubclassOf<UControlRig> ControlRigClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ConvertToControlRigPure(const FAnimNodeReference& Node, FControlRigReference& ControlRig, bool& Result);
    
    UFUNCTION(BlueprintCallable)
    static FControlRigReference ConvertToControlRig(const FAnimNodeReference& Node, EAnimNodeReferenceConversionResult& Result);
    
};

