#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Templates/SubclassOf.h"
#include "QuestFrameworkSettings.generated.h"

class UQuestContextViewModel;
class UQuestListViewModel;
class UQuestObjectiveViewModel;
class UQuestTrackerViewModel;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class QUESTFRAMEWORK_API UQuestFrameworkSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> QuestAssetPaths;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestContextViewModel> QuestContextViewModelClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestObjectiveViewModel> QuestObjectiveViewModelClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestTrackerViewModel> QuestTrackerViewModelClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UQuestListViewModel> QuestListViewModelClass;
    
    UQuestFrameworkSettings();

};

