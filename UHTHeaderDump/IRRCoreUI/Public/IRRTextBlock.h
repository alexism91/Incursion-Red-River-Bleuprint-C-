#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataTableRowHandle -FallbackName=DataTableRowHandle
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
#include "IRRTextBlock.generated.h"

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle FontPreset;
    
    UIRRTextBlock();

    UFUNCTION(BlueprintCallable)
    void SetFontPreset(const FDataTableRowHandle& InFontPreset);
    
    UFUNCTION(BlueprintCallable)
    void ApplyFontPreset();
    
};

