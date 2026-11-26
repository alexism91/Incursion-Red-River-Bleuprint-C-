#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "FirstPersonCoreSubObject.generated.h"

class AActor;
class ACharacter;
class UEquippableComponent;
class UGameplayTagsComponent;
class UInventoryComponent;
class UNinjaInputManagerComponent;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UFirstPersonCoreSubObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyLocally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CustomTickRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer BlockingTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* InventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UGameplayTagsComponent* GameplayTagsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNinjaInputManagerComponent* InputManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEquippableComponent* EquippableComponent;
    
    UFirstPersonCoreSubObject();

    UFUNCTION(BlueprintCallable)
    void UpdateEquippableComponent(UEquippableComponent* NewEquippableComponent);
    
    UFUNCTION(BlueprintCallable)
    void Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_Tick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_InitFirstPersonCoreSubObject(UInventoryComponent* OwnerInventoryComponent, UGameplayTagsComponent* OwningGameplayTagsComponent, UNinjaInputManagerComponent* OwningInputManagerComponent, ACharacter* OwningCharacter);
    
    UFUNCTION(BlueprintCallable)
    void InitFirstPersonCoreSubObject(UInventoryComponent* OwnerInventoryComponent, UGameplayTagsComponent* OwningGameplayTagsComponent, UNinjaInputManagerComponent* OwningInputManagerComponent, ACharacter* OwningCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
};

