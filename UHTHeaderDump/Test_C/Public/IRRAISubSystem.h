#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAIGlobalSettings -FallbackName=IRRAIGlobalSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAIStatEffect -FallbackName=IRRAIStatEffect
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAISubManagerHost -FallbackName=IRRAISubManagerHost
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAIWeaponSettings -FallbackName=IRRAIWeaponSettings
#include "IRRAIDelegateDelegate.h"
#include "IRRBarkSettings.h"
#include "IRRAISubSystem.generated.h"

class AAIManager;
class AActor;
class ACharacter;
class AIRRAIBaseController;
class UIRRAISubManagerBase;

UCLASS(Blueprintable)
class TEST_C_API UIRRAISubSystem : public UWorldSubsystem, public IIRRAISubManagerHost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIDelegate OnBotAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIDelegate OnBotRemoved;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIGlobalSettings GlobalSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIWeaponSettings WeaponSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRBarkSettings BarkSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIStatEffect GlobalStatEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRAIBaseController*> AIControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAIManager* AIManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<UClass*, UIRRAISubManagerBase*> SubManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UIRRAISubManagerBase*> ManagerOrder;
    
public:
    UIRRAISubSystem();

    UFUNCTION(BlueprintCallable)
    void GrenadeThrown(AActor* Grenade, ACharacter* Instigator, const FVector& PredictedLocation);
    
    UFUNCTION(BlueprintCallable)
    void GrenadeExploded(AActor* Grenade, ACharacter* Instigator);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIWeaponSettings GetWeaponSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIGlobalSettings GetGlobalSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRBarkSettings GetBarkSettings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AIRRAIBaseController*> GetAllAIControllers() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIManager* GetAIManager() const;
    

    // Fix for true pure virtual functions not being implemented
};

