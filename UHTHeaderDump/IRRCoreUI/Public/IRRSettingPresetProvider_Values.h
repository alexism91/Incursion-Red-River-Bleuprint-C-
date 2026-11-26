#pragma once
#include "CoreMinimal.h"
#include "IRRSettingPresetProvider.h"
#include "IRRSettingPresetValues.h"
#include "IRRSettingPresetProvider_Values.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class IRRCOREUI_API UIRRSettingPresetProvider_Values : public UIRRSettingPresetProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRSettingPresetValues> BuiltInPresets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ExcludedSettingIds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeKeybinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeDefaultValues;
    
    UIRRSettingPresetProvider_Values();

};

