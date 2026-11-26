#pragma once
#include "CoreMinimal.h"
#include "IRRRegisteredTabInfo.generated.h"

class UIRRBaseButtonWidget;
class UWidget;

USTRUCT(BlueprintType)
struct FIRRRegisteredTabInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TabIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRBaseButtonWidget* TabButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ContentInstance;
    
    IRRCOREUI_API FIRRRegisteredTabInfo();
};

