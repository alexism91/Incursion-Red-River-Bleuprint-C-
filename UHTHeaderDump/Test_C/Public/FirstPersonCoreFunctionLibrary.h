#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "Templates/SubclassOf.h"
#include "FirstPersonCoreFunctionLibrary.generated.h"

class AActor;
class UFirstPersonCoreComponent;
class UFirstPersonCoreSubObject;
class UFirstPersonHandGunCurveAnim;
class UFirstPersonHandGunCurvePlayer;
class UFirstPersonStamina;

UCLASS(Blueprintable)
class TEST_C_API UFirstPersonCoreFunctionLibrary : public UObject {
    GENERATED_BODY()
public:
    UFirstPersonCoreFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void StopHandGunCurve(AActor* Owner, int32 Handle, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    static void StopAllHandGunCurves(AActor* Owner, float BlendOutTime);
    
    UFUNCTION(BlueprintCallable)
    static int32 PlayHandGunCurve(AActor* Owner, UFirstPersonHandGunCurveAnim* Clip, float Intensity, float PlayRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UFirstPersonHandGunCurvePlayer* GetHandGunCurvePlayer(AActor* Owner);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetHandGunCurveOverlay(AActor* Owner, FVector& OutLocation, FRotator& OutRotation);
    
    UFUNCTION(BlueprintCallable)
    static UFirstPersonStamina* GetFirstPersonStamina(AActor* Owner, FGameplayTag StaminaIdentifier);
    
    UFUNCTION(BlueprintCallable)
    static UFirstPersonCoreSubObject* GetFirstPersonCoreSubObject(AActor* Owner, TSubclassOf<UFirstPersonCoreSubObject> SubObjectClass);
    
    UFUNCTION(BlueprintCallable)
    static UFirstPersonCoreComponent* GetFirstPersonCoreComponent(AActor* Owner);
    
};

