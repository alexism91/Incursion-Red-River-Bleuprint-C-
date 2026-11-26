#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "InterchangeEditorSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=EditorPerProjectUserSettings)
class UInterchangeEditorSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowImportDialogAtReimport;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName UsedGroupName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid UsedGroupUID;
    
public:
    UInterchangeEditorSettings();

    UFUNCTION(BlueprintCallable)
    void SetUsedGroupName(const FName& InUsedGroupName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetUsedGroupName() const;
    
private:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetSelectableItems() const;
    
};

