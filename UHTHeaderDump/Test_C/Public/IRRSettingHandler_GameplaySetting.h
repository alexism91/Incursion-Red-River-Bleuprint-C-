#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRSettingHandler -FallbackName=IRRSettingHandler
#include "IRRSettingHandler_GameplaySetting.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class TEST_C_API UIRRSettingHandler_GameplaySetting : public UIRRSettingHandler {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Member;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ToggleTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TrueOptionId;
    
    UIRRSettingHandler_GameplaySetting();

    UFUNCTION(BlueprintCallable)
    TArray<FString> GetMemberOptions() const;
    
};

