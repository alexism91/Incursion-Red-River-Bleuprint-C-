#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EIRRFrameGenerationVendor.h"
#include "IRRFrameGenerationLibrary.generated.h"

class UObject;

UCLASS(Blueprintable)
class TEST_C_API UIRRFrameGenerationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRFrameGenerationLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SetFrameGenerationVendor(const UObject* WorldContextObject, EIRRFrameGenerationVendor Vendor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRestartRequiredForFrameGeneration(EIRRFrameGenerationVendor Vendor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsFrameGenerationVendorSupported(EIRRFrameGenerationVendor Vendor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EIRRFrameGenerationVendor GetSessionFrameGenerationVendor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EIRRFrameGenerationVendor GetSavedFrameGenerationVendor();
    
};

