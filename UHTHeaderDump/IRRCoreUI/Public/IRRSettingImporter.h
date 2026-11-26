#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRSettingImporter.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, DefaultToInstanced, EditInlineNew)
class IRRCOREUI_API UIRRSettingImporter : public UObject {
    GENERATED_BODY()
public:
    UIRRSettingImporter();

};

