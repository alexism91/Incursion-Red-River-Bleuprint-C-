#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=SlateBrush -FallbackName=SlateBrush
#include "MVVMSlateBrushConversionLibrary.generated.h"

class UMaterialInterface;
class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class UMVVMSlateBrushConversionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMVVMSlateBrushConversionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush Conv_SetVectorParameterMID(FSlateBrush Brush, UMaterialInterface* Material, FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush Conv_SetVectorParameter(FSlateBrush Brush, FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush Conv_SetTextureParameterMID(FSlateBrush Brush, UMaterialInterface* Material, FName ParameterName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush Conv_SetTextureParameter(FSlateBrush Brush, FName ParameterName, UTexture* Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush Conv_SetScalarParameterMID(FSlateBrush Brush, UMaterialInterface* Material, FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FSlateBrush Conv_SetScalarParameter(FSlateBrush Brush, FName ParameterName, float Value);
    
};

