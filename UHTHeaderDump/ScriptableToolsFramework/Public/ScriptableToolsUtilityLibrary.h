#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InputRayHit -FallbackName=InputRayHit
#include "ScriptableToolsUtilityLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class SCRIPTABLETOOLSFRAMEWORK_API UScriptableToolsUtilityLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UScriptableToolsUtilityLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputRayHit MakeInputRayHit_Miss();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FInputRayHit MakeInputRayHit_MaxDepth();
    
    UFUNCTION(BlueprintPure)
    static FInputRayHit MakeInputRayHit(double HitDepth, UObject* OptionalHitObject);
    
};

