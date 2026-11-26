#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ECollisionChannel -FallbackName=ECollisionChannel
#include "BaseVehicle.h"
#include "VehicleTrailer.generated.h"

class AActor;
class UVehicleHitchComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AVehicleTrailer : public ABaseVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CouplingOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AxleOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxArticulationAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPitchToTerrain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> GroundTraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundTraceHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundTraceDepth;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UVehicleHitchComponent* TowingHitch;
    
public:
    AVehicleTrailer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnUncoupled();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_OnCoupled(AActor* TowingVehicle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTowed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTowingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UVehicleHitchComponent* GetTowingHitch() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDrawbarLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCouplingWorldLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAxleWorldLocation() const;
    
};

