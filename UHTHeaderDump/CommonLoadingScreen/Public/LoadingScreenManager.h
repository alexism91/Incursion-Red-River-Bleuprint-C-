#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "OnLoadingScreenVisibilityChangedDelegateDynamicDelegate.h"
#include "OnPostLoadMapTriggeredDelegate.h"
#include "OnPreLoadMapTriggeredDelegate.h"
#include "OnSeamlessTravelStartDelegate.h"
#include "OnShowLoadingScreenAdditionalSecsTriggeredDelegate.h"
#include "LoadingScreenManager.generated.h"

class UObject;
class UUserWidget;
class UWorld;

UCLASS(Blueprintable)
class COMMONLOADINGSCREEN_API ULoadingScreenManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowLoadingScreenAdditionalSecsTriggered OnShowLoadingScreenAdditionalSecsTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPreLoadMapTriggered OnPreLoadMapTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPostLoadMapTriggered OnPostLoadMapTriggered;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSeamlessTravelStart OnSeamlessTravelStart;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadingScreenVisibilityChangedDelegateDynamic OnLoadingScreenVisibilityChangedDelegateDynamic;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* m_LoadingScreenUserWidget;
    
public:
    ULoadingScreenManager();

    UFUNCTION(BlueprintCallable)
    void RemoveLoadingScreenWatcher(UObject* Object);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void K2_SetLoadingScreenCustomText(UWorld* WorldContextObject, const FString& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLoadingScreenDisplayStatus() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLoadingScreenCustomText() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDebugReasonForShowingOrHidingLoadingScreen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentLoadingMap() const;
    
    UFUNCTION(BlueprintCallable)
    void AddLoadingScreenWatcher(UObject* Object);
    
};

