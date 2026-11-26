#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EAxis -FallbackName=EAxis
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=ETriggerEvent -FallbackName=ETriggerEvent
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionInstance -FallbackName=InputActionInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionValue -FallbackName=InputActionValue
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilitySystemInterface -FallbackName=AbilitySystemInterface
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "NinjaInputBufferComponent.h"
#include "ProcessedInputSetup.h"
#include "NinjaInputManagerComponent.generated.h"

class AController;
class APawn;
class UAbilitySystemComponent;
class UArrowComponent;
class UEnhancedInputComponent;
class UEnhancedInputLocalPlayerSubsystem;
class UInputAction;
class UInputMappingContext;
class UNinjaInputSetupDataAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class NINJAINPUT_API UNinjaInputManagerComponent : public UNinjaInputBufferComponent, public IAbilitySystemInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJumpedDelegate);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MovementInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LookInput;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FJumpedDelegate JumpedDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEnhancedInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UNinjaInputSetupDataAsset*> InputHandlerSetup;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* OwnerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* ForwardReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputMappingContext*, FProcessedInputSetup> ProcessedSetups;
    
public:
    UNinjaInputManagerComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_SendGameplayEventToOwner(const FGameplayTag& GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 SendGameplayEventToOwner(const FGameplayTag& GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction, bool bSendLocally, bool bSendToServer) const;
    
    UFUNCTION(BlueprintCallable)
    void RemoveInputSetupData(const UNinjaInputSetupDataAsset* SetupData);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnRestarted(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void OnControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasSetupData(const UNinjaInputSetupDataAsset* SetupData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasInputMappingContext(const UInputMappingContext* InputMappingContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasCompatibleInputHandler(const UInputAction* InputAction, const ETriggerEvent& TriggerEvent) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetVectorForAxis(const TEnumAsByte<EAxis::Type> Axis, FVector& OutReference) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetRightVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMovementInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetLookInput() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLastInputVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FVector GetForwardVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UEnhancedInputLocalPlayerSubsystem* GetEnhancedInputSubsystem(AController* Controller) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AController* GetController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void DispatchTriggeredEvent(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void DispatchStartedEvent(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void DispatchOngoingEvent(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void DispatchCompletedEvent(const FInputActionInstance& ActionInstance);
    
    UFUNCTION(BlueprintCallable)
    void DispatchCancelledEvent(const FInputActionInstance& ActionInstance);
    
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_SendGameplayEventToOwner(const FGameplayTag& GameplayEventTag, const FInputActionValue& Value, const UInputAction* InputAction) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void AddInputSetupData(const UNinjaInputSetupDataAsset* SetupData);
    

    // Fix for true pure virtual functions not being implemented
};

