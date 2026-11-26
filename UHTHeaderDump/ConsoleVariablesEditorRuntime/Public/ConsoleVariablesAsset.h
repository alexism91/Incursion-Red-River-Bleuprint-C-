#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=ESearchCase -FallbackName=ESearchCase
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieSceneConsoleVariableTrackInterface -FallbackName=MovieSceneConsoleVariableTrackInterface
#include "ConsoleVariablesEditorAssetSaveData.h"
#include "ConsoleVariablesAsset.generated.h"

class UConsoleVariablesAsset;

UCLASS(Blueprintable)
class CONSOLEVARIABLESEDITORRUNTIME_API UConsoleVariablesAsset : public UObject, public IMovieSceneConsoleVariableTrackInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString VariableCollectionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConsoleVariablesEditorAssetSaveData> SavedCommands;
    
public:
    UConsoleVariablesAsset();

    UFUNCTION(BlueprintCallable)
    void SetVariableCollectionDescription(const FString& InVariableCollectionDescription);
    
    UFUNCTION(BlueprintCallable)
    void ReplaceSavedCommands(const TArray<FConsoleVariablesEditorAssetSaveData>& Replacement);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveConsoleVariable(const FString& InCommandString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetVariableCollectionDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSavedCommandsCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetSavedCommandsAsStringArray(bool bOnlyIncludeChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetSavedCommandsAsCommaSeparatedString(bool bOnlyIncludeChecked) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FConsoleVariablesEditorAssetSaveData> GetSavedCommands() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool FindSavedDataByCommandString(const FString& InCommandString, FConsoleVariablesEditorAssetSaveData& OutValue, const TEnumAsByte<ESearchCase::Type> SearchCase) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false, meta=(WorldContext="WorldContextObject"))
    void ExecuteSavedCommands(UObject* WorldContextObject, bool bOnlyIncludeChecked) const;
    
    UFUNCTION(BlueprintCallable)
    void CopyFrom(const UConsoleVariablesAsset* InAssetToCopy);
    
    UFUNCTION(BlueprintCallable)
    void AddOrSetConsoleObjectSavedData(const FConsoleVariablesEditorAssetSaveData& InData);
    
    UFUNCTION(BlueprintCallable)
    void AddFrom(const UConsoleVariablesAsset* InAssetToCopy);
    

    // Fix for true pure virtual functions not being implemented
};

