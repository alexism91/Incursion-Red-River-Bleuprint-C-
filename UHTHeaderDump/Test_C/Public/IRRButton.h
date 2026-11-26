#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
#include "EIRRButtonCategories.h"
#include "IRRButton.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRButton : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRButtonCategories ButtonCategory;
    
    UIRRButton();

};

