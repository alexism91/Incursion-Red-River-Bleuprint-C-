#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "IRROnCollectionSettingChangedDelegate.h"
#include "IRROnRestartRequiredChangedDelegate.h"
#include "IRROnSettingCollectionChangedDelegate.h"
#include "IRRSettingDefinition.h"
#include "IRRSettingValue.h"
#include "IRRSettingsSubsystem.generated.h"

class UIRRSettingCollection;
class UIRRSettingCollectionModel;

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRSettingsSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnCollectionSettingChanged OnSettingChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnSettingCollectionChanged OnCollectionChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRROnRestartRequiredChanged OnRestartRequiredChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UIRRSettingCollectionModel*> Models;
    
public:
    UIRRSettingsSubsystem();

    UFUNCTION(BlueprintCallable)
    bool SetSettingValue(FName CollectionId, FName SettingId, FIRRSettingValue Value);
    
    UFUNCTION(BlueprintCallable)
    void SetRestartRequired(FName Key, bool bRequired);
    
    UFUNCTION(BlueprintCallable)
    void RestartGame();
    
    UFUNCTION(BlueprintCallable)
    bool RegisterCollection(UIRRSettingCollection* Collection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingOn(FName CollectionId, FName SettingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSettingAwaitingRestart(FName CollectionId, FName SettingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestartRequired(FName CollectionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRestartMarked(FName Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingValue(FName CollectionId, FName SettingId, FIRRSettingValue& OutValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetSettingsAwaitingRestart(FName CollectionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetSettingOptionId(FName CollectionId, FName SettingId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSettingNumber(FName CollectionId, FName SettingId, float Fallback) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSettingDefinition(FName CollectionId, FName SettingId, FIRRSettingDefinition& OutDefinition) const;
    
    UFUNCTION(BlueprintCallable)
    UIRRSettingCollectionModel* GetOrCreateModel(UIRRSettingCollection* Collection);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRSettingCollectionModel* GetModel(FName CollectionId) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRSettingCollection* GetCollection(FName CollectionId) const;
    
    UFUNCTION(BlueprintCallable)
    void ApplySettings(const TArray<UIRRSettingCollection*>& Collections);
    
};

