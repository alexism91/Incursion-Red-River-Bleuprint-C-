#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "OnAttachedToWeaponDelegate.h"
#include "OnDetachedFromWeaponDelegate.h"
#include "AttachmentComponent.generated.h"

class UWeaponComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UAttachmentComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWeaponComponent* Weapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttachedToWeapon OnAttachedToWeapon;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDetachedFromWeapon OnDetachedFromWeapon;
    
    UAttachmentComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void DetachFromWeapon();
    
    UFUNCTION(BlueprintCallable)
    void AttachToWeapon(UWeaponComponent* NewWeapon);
    
};

