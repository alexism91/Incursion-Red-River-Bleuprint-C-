#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EKronosUserAuthCompleteResult.h"
#include "EKronosUserAuthState.h"
#include "OnKronosUserAuthCompleteDelegate.h"
#include "OnKronosUserAuthStartedDelegate.h"
#include "OnKronosUserAuthStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "KronosUserManager.generated.h"

class UKronosUserAuthWidget;
class UKronosUserManager;

UCLASS(Blueprintable)
class KRONOS_API UKronosUserManager : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UKronosUserAuthWidget> AuthWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UKronosUserAuthWidget* AuthWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugSimulateAuthFailure;
    
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosUserAuthStarted OnUserAuthStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosUserAuthStateChanged OnUserAuthStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnKronosUserAuthComplete OnUserAuthCompleteEvent;
    
public:
    UKronosUserManager();

protected:
    UFUNCTION(BlueprintCallable)
    void OnCustomAuthTasksComplete(bool bWasSuccessful, const FText& ErrorText);
    
public:
    UFUNCTION(BlueprintCallable)
    bool LogoutUser();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUserLogoutStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUserLogoutComplete(bool bWasSuccessful);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUserAuthStateChanged(EKronosUserAuthState NewState, EKronosUserAuthState PrevState, bool bIsInitialAuth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUserAuthStarted(bool bIsInitialAuth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUserAuthComplete(EKronosUserAuthCompleteResult Result, bool bWasInitialAuth, const FText& ErrorText);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLogoutInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuthenticatingUser() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAuthenticated() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetLoginCredentials(FString& LoginType, FString& LoginId, FString& LoginToken);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EKronosUserAuthState GetCurrentAuthState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UKronosUserManager* Get(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BeginCustomAuthTasks();
    
public:
    UFUNCTION(BlueprintCallable)
    bool AuthenticateUser();
    
};

