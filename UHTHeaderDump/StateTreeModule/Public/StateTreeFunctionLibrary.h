#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "StateTreeReference.h"
#include "StateTreeFunctionLibrary.generated.h"

class UStateTree;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UStateTreeFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UStateTreeFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetStateTree(UPARAM(Ref) FStateTreeReference& Reference, UStateTree* StateTree);
    
    UFUNCTION(BlueprintCallable)
    static FStateTreeReference MakeStateTreeReference(UStateTree* StateTree);
    
    UFUNCTION(BlueprintCallable)
    static void K2_SetParametersProperty(UPARAM(Ref) FStateTreeReference& Reference, FGuid PropertyID, const int32& NewValue);
    
    UFUNCTION(BlueprintCallable)
    static void K2_GetParametersProperty(const FStateTreeReference& Reference, FGuid PropertyID, int32& ReturnValue);
    
};

