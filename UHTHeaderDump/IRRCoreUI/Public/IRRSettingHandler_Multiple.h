#pragma once
#include "CoreMinimal.h"
#include "IRRSettingHandler.h"
#include "IRRSettingHandler_Multiple.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class IRRCOREUI_API UIRRSettingHandler_Multiple : public UIRRSettingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRSettingHandler*> Handlers;
    
    UIRRSettingHandler_Multiple();

};

