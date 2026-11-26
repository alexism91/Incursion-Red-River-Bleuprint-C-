#pragma once
#include "CoreMinimal.h"
#include "EIRRScalabilityGroup.h"
#include "IRRSettingHandler.h"
#include "IRRSettingHandler_Scalability.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class IRRCOREUI_API UIRRSettingHandler_Scalability : public UIRRSettingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRScalabilityGroup Group;
    
    UIRRSettingHandler_Scalability();

};

