#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "MVVMConversionLibrary.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMVVMConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMVVMConversionLibrary();

private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, ESlateVisibility TrueVisibility, ESlateVisibility FalseVisibility);
    
};

