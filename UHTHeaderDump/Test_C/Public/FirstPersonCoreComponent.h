#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WeightedBlendable -FallbackName=WeightedBlendable
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "FirstPersonCustomTickSubObject.h"
#include "IRRGameplaySettings.h"
#include "OnFirstPersonControllerSettingsChangedDelegate.h"
#include "FirstPersonCoreComponent.generated.h"

class UEquippableComponent;
class UFirstPersonCoreSubObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UFirstPersonCoreComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeightedBlendable> FirstPersonCameraBlendables;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFirstPersonCoreSubObject*> FirstPersonCoreSubObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFirstPersonCoreSubObject*> NativeTickSubObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFirstPersonCustomTickSubObject> CustomTickSubObjects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRGameplaySettings ControllerSettings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFirstPersonControllerSettingsChanged OnFirstPersonControllerSettingsChanged;
    
    UFirstPersonCoreComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSettings(FIRRGameplaySettings NewSettings);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFirstPersonSubObjects(TArray<UFirstPersonCoreSubObject*> ToRemoveSubObjects);
    
    UFUNCTION(BlueprintCallable)
    void RemoveFirstPersonCameraBlendables(TArray<FWeightedBlendable> ToAddBlendables);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnEquippableChanged(UEquippableComponent* EquippableComponent);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsSettingToggled(FGameplayTag Tag);
    
    UFUNCTION(BlueprintCallable)
    void AddFirstPersonSubObjects(TArray<UFirstPersonCoreSubObject*> ToRemoveSubObjects);
    
    UFUNCTION(BlueprintCallable)
    void AddFirstPersonCameraBlendables(TArray<FWeightedBlendable> ToAddBlendables);
    
};

