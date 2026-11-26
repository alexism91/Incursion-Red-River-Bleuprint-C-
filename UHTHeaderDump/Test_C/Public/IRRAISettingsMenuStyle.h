#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAICategorySettingsBase -FallbackName=IRRAICategorySettingsBase
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRRowLayout -FallbackName=IRRRowLayout
#include "IRRSettingsCategoryRowStyle.h"
#include "IRRSettingsCategoryStyle.h"
#include "IRRSettingsHeaderStyle.h"
#include "IRRSettingsPanelStyle.h"
#include "IRRSettingsRowStyle.h"
#include "IRRAISettingsMenuStyle.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAISettingsMenuStyle : public FIRRAICategorySettingsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingsPanelStyle Panel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingsHeaderStyle Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingsCategoryStyle Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingsCategoryRowStyle CategoryRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRSettingsRowStyle SettingRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRowLayout RowLayout;
    
    FIRRAISettingsMenuStyle();
};

