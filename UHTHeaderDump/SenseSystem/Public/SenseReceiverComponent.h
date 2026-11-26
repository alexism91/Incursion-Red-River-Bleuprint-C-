#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ESensorArrayByType.h"
#include "ESensorThreadType.h"
#include "ESensorType.h"
#include "ESuccessState.h"
#include "OnMainTargetStatusChangedDelegate.h"
#include "OnSensorUpdateDelegateDelegate.h"
#include "SensedStimulus.h"
#include "StimulusFindResult.h"
#include "Templates/SubclassOf.h"
#include "SenseReceiverComponent.generated.h"

class AActor;
class UActiveSensor;
class UObject;
class UPassiveSensor;
class USenseStimulusBase;
class USensorBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SENSESYSTEM_API USenseReceiverComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSenseReceiver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSensorRotationFromController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContainsSenseThreadSensors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActiveSensor*> ActiveSensors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPassiveSensor*> PassiveSensors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActiveSensor*> ManualSensors;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensorUpdateDelegate OnNewSense;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensorUpdateDelegate OnCurrentSense;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensorUpdateDelegate OnLostSense;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensorUpdateDelegate OnForgetSense;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSensorUpdateDelegate OnUnregisterSense;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMainTargetStatusChanged OnMainTargetStatusChanged;
    
    USenseReceiverComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnableSenseReceiver(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrackTargetComponent(USenseStimulusBase* Comp);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTrackTargetActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void OnUnregisterStimulus(UObject* Obj);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<USenseStimulusBase*> GetTrackTargetComponents() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetTrackTargetActors() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FTransform GetSensorTransform(FName SensorTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<USensorBase*> GetSensorsByType_BP(ESensorType Sensor_Type) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USensorBase* GetSensor_ByTagAndClass(ESensorType Sensor_Type, FName Tag, TSubclassOf<USensorBase> SensorClass, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USensorBase* GetSensor_ByTag(ESensorType Sensor_Type, FName Tag, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USensorBase* GetSensor_ByClass(TSubclassOf<USensorBase> SensorClass, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USensorBase* GetPassiveSensor_ByTag(FName Tag, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USensorBase* GetPassiveSensor_ByClass(TSubclassOf<UPassiveSensor> SensorClass, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UActiveSensor* GetManualSensor_ByTag(FName Tag, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USensorBase* GetManualSensor_ByClass(TSubclassOf<UActiveSensor> SensorClass, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UActiveSensor* GetActiveSensor_ByTag(FName Tag, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    USensorBase* GetActiveSensor_ByClass(TSubclassOf<UActiveSensor> SensorClass, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FStimulusFindResult> FindStimulusInSensor(const USenseStimulusBase* StimulusComponent, ESensorType Sensor_Type, FName SensorTag, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindSensedActor(const AActor* Actor, ESensorType Sensor_Type, FName SensorTag, ESensorArrayByType SenseEventType, FSensedStimulus& Out, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FStimulusFindResult> FindActorInSensor(const AActor* Actor, ESensorType Sensor_Type, FName SensorTag, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FindActorInAllSensors(const AActor* Actor, ESensorType& Sensor_Type, FName& SensorTag, ESensorArrayByType& SenseEventType, FSensedStimulus& Out, ESuccessState& SuccessState) const;
    
    UFUNCTION(BlueprintCallable)
    bool DestroySensor(ESensorType Sensor_Type, FName Tag);
    
    UFUNCTION(BlueprintCallable)
    USensorBase* CreateNewSensor(TSubclassOf<USensorBase> SensorClass, ESensorType Sensor_Type, FName Tag, ESensorThreadType ThreadType, bool bEnableNewSensor, ESuccessState& SuccessState);
    
    UFUNCTION(BlueprintCallable)
    void ClearTrackTargets();
    
    UFUNCTION()
    void BindOnReportStimulusEvent(uint16 StimulusID, FName SensorTag);
    
    UFUNCTION(BlueprintCallable)
    void AddTrackTargetComponent(USenseStimulusBase* Comp);
    
    UFUNCTION(BlueprintCallable)
    void AddTrackTargetActor(AActor* Actor);
    
};

