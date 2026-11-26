#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "IRRFontData.h"
#include "IRRInputActionDescriptor.h"
#include "IRRCoreUIFunctionLibrary.generated.h"

class UObject;
class UTextBlock;

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRCoreUIFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRCoreUIFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UpdateText(UTextBlock* TextBlock, FIRRFontData FontData);
    
    UFUNCTION(BlueprintCallable)
    static bool IsInputActionTriggered(FIRRInputActionDescriptor InputAction, FKey Input);
    
    UFUNCTION(BlueprintCallable)
    static FIRRInputActionDescriptor GetInputActionDescriptorByRowHandle(FDataTableRowHandle InputActionHandle);
    
    UFUNCTION(BlueprintCallable)
    static FIRRFontData GetFontPresetByRowHandle(FDataTableRowHandle FontPreset);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ExecuteInputAction(FIRRInputActionDescriptor InputAction, UObject* WorldContextObject, UObject* Context);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool CanExecuteInputAction(FIRRInputActionDescriptor InputAction, UObject* WorldContextObject, UObject* Context);
    
};

