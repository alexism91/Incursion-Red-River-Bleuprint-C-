#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AkAudio -ObjectName=AkComponent -FallbackName=AkComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRSignificanceSystem -ObjectName=IRRSignificanceInterface -FallbackName=IRRSignificanceInterface
#include "EIRRAcousticEnvironment.h"
#include "IRRAcousticRoomChangedDelegate.h"
#include "AdvancedAkComponent.generated.h"

class AActor;
class UIRRAcousticEnvironmentSubsystem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UAdvancedAkComponent : public UAkComponent, public IIRRSignificanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSignificance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAttenuationDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SignificanceRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnchorToListenerWhenLocallyControlled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ListenerAnchorDropDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackAcousticEnvironment;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAcousticRoomChanged OnAcousticRoomChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIRRAcousticEnvironmentSubsystem* AcousticSubsystem;
    
public:
    UAdvancedAkComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAcousticallyIndoors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasAcousticEnvironment() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleOwnerEndOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleOwnerBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetAcousticRoomActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIRRAcousticEnvironment GetAcousticEnvironment() const;
    

    // Fix for true pure virtual functions not being implemented
};

