#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Templates/SubclassOf.h"
#include "VehicleHitchComponent.generated.h"

class AVehicleTrailer;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UVehicleHitchComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AVehicleTrailer> TrailerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpawnTrailerOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDestroySpawnedTrailerWithTractor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTowChainLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseWreckedTrailer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReleaseTrailerWhenTractorWrecked;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPlausibleSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebug;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Trailer, meta=(AllowPrivateAccess=true))
    AVehicleTrailer* Trailer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AVehicleTrailer* CoupledTrailer;
    
public:
    UVehicleHitchComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    AVehicleTrailer* SpawnTrailer();
    
    UFUNCTION(BlueprintCallable)
    void ResetArticulation();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseTrailer();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Trailer();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasTrailer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AVehicleTrailer* GetTrailer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetArticulationAngle() const;
    
    UFUNCTION(BlueprintCallable)
    bool AttachTrailer(AVehicleTrailer* NewTrailer);
    
};

