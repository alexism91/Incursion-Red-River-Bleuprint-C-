#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMEditorSettings -FallbackName=RigVMEditorSettings
#include "ControlRigEditorSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UControlRigEditorSettings : public URigVMEditorSettings {
    GENERATED_BODY()
public:
    UControlRigEditorSettings();

};

