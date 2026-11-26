#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EIRRTriggerEditorView.h"
#include "IRRLevelTriggerViewSettings.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class IRRMISSIONSYSTEM_API UIRRLevelTriggerViewSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, EIRRTriggerEditorView> ViewByCategory;
    
    UIRRLevelTriggerViewSettings();

};

