#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "IRRLaserSettings.h"
#include "OnLaserEndPointDelegate.h"
#include "TacticalComponent.h"
#include "LaserComponent.generated.h"

class AActor;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API ULaserComponent : public UTacticalComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserMeshComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LaserDotComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRLaserSettings LaserSettings;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserDot;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLaserEndPoint OnLaserEndPoint;
    
    ULaserComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasLaserImpact() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetLaserMesh() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetLaserImpactPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLaserImpactDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetLaserImpactActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLaserImpact(FVector& OutPoint, AActor*& OutHitActor, float& OutDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetLaserDot() const;
    
};

