#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "IRRBoneIlluminationWidget.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UIRRBoneIlluminationWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTextBlock* IlluminationText;
    
public:
    UIRRBoneIlluminationWidget();

};

