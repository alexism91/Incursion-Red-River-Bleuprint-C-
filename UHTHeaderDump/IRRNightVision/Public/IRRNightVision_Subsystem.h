#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRNightVision_Subsystem.generated.h"

class UActorComponent;
class UMaterialParameterCollection;
class UMaterialParameterCollectionInstance;
class UObject;

UCLASS(Blueprintable)
class IRRNIGHTVISION_API UIRRNightVision_Subsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> InfraredDevices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollectionInstance* InfraredMPC;
    
public:
    UIRRNightVision_Subsystem();

    UFUNCTION(BlueprintCallable)
    void UnregisterInfraredDevice(UActorComponent* InfraredDevice);
    
    UFUNCTION(BlueprintCallable)
    void SetNightVisionColor(const FLinearColor& Color);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void SetInfraredMaterialParameterCollection(UObject* WorldContextObject, UMaterialParameterCollection* MPC);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInfraredDevice(UActorComponent* InfraredDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInfraredModeEnabledOnPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UActorComponent*> GetInfraredDevices() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableInfraredMode();
    
    UFUNCTION(BlueprintCallable)
    void DisableInfraredMode();
    
};

