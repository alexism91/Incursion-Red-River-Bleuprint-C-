#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "WidgetAnimationHandle.h"
#include "WidgetAnimationHandleFunctionLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UWidgetAnimationHandleFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UWidgetAnimationHandleFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void SetUserTag(UPARAM(Ref) FWidgetAnimationHandle& Target, FName InUserTag);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetUserTag(const FWidgetAnimationHandle& Target);
    
};

