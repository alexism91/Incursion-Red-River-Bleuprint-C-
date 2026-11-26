#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "InteractionFunctionLibrary.generated.h"

class AActor;
class UInteractionManager;
class UInteractionTarget;
class UObject;

UCLASS(Blueprintable)
class TEST_C_API UInteractionFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UInteractionFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UInteractionManager* GetLocalInteractionManager(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static UInteractionTarget* GetInteractionTarget(AActor* Owner);
    
    UFUNCTION(BlueprintCallable)
    static UInteractionManager* GetInteractionManager(AActor* Owner);
    
};

