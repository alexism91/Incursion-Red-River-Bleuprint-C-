#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HitResult -FallbackName=HitResult
#include "PassiveSensor.h"
#include "SensorTouch.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew)
class SENSESYSTEM_API USensorTouch : public UPassiveSensor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> TouchCollisions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bActorRootCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnComponentHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnComponentBeginOverlap;
    
    USensorTouch();

    UFUNCTION(BlueprintCallable)
    void SetTouchCollisions(TArray<UPrimitiveComponent*> InTouchCollisions);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchCollision(UPrimitiveComponent* Prim);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTouchCollisions(TArray<UPrimitiveComponent*> InTouchCollisions);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTouchCollision(UPrimitiveComponent* InTouchCollision);
    
    UFUNCTION(BlueprintCallable)
    void OnTouchHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
    UFUNCTION(BlueprintCallable)
    void AddTouchCollisions(TArray<UPrimitiveComponent*> InTouchCollisions);
    
    UFUNCTION(BlueprintCallable)
    void AddTouchCollision(UPrimitiveComponent* InTouchCollision);
    
};

