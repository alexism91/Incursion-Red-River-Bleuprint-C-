#include "SenseReceiverComponent.h"
#include "Templates/SubclassOf.h"

USenseReceiverComponent::USenseReceiverComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bEnableSenseReceiver = true;
    this->bSensorRotationFromController = false;
    this->bContainsSenseThreadSensors = false;
}

void USenseReceiverComponent::SetEnableSenseReceiver(bool bEnable) {
}

void USenseReceiverComponent::RemoveTrackTargetComponent(USenseStimulusBase* Comp) {
}

void USenseReceiverComponent::RemoveTrackTargetActor(AActor* Actor) {
}

void USenseReceiverComponent::OnUnregisterStimulus(UObject* Obj) {
}

TArray<USenseStimulusBase*> USenseReceiverComponent::GetTrackTargetComponents() const {
    return TArray<USenseStimulusBase*>();
}

TArray<AActor*> USenseReceiverComponent::GetTrackTargetActors() const {
    return TArray<AActor*>();
}

FTransform USenseReceiverComponent::GetSensorTransform_Implementation(FName SensorTag) const {
    return FTransform{};
}

TArray<USensorBase*> USenseReceiverComponent::GetSensorsByType_BP(ESensorType Sensor_Type) const {
    return TArray<USensorBase*>();
}

USensorBase* USenseReceiverComponent::GetSensor_ByTagAndClass(ESensorType Sensor_Type, FName Tag, TSubclassOf<USensorBase> SensorClass, ESuccessState& SuccessState) const {
    return NULL;
}

USensorBase* USenseReceiverComponent::GetSensor_ByTag(ESensorType Sensor_Type, FName Tag, ESuccessState& SuccessState) const {
    return NULL;
}

USensorBase* USenseReceiverComponent::GetSensor_ByClass(TSubclassOf<USensorBase> SensorClass, ESuccessState& SuccessState) const {
    return NULL;
}

USensorBase* USenseReceiverComponent::GetPassiveSensor_ByTag(FName Tag, ESuccessState& SuccessState) const {
    return NULL;
}

USensorBase* USenseReceiverComponent::GetPassiveSensor_ByClass(TSubclassOf<UPassiveSensor> SensorClass, ESuccessState& SuccessState) const {
    return NULL;
}

UActiveSensor* USenseReceiverComponent::GetManualSensor_ByTag(FName Tag, ESuccessState& SuccessState) const {
    return NULL;
}

USensorBase* USenseReceiverComponent::GetManualSensor_ByClass(TSubclassOf<UActiveSensor> SensorClass, ESuccessState& SuccessState) const {
    return NULL;
}

UActiveSensor* USenseReceiverComponent::GetActiveSensor_ByTag(FName Tag, ESuccessState& SuccessState) const {
    return NULL;
}

USensorBase* USenseReceiverComponent::GetActiveSensor_ByClass(TSubclassOf<UActiveSensor> SensorClass, ESuccessState& SuccessState) const {
    return NULL;
}

TArray<FStimulusFindResult> USenseReceiverComponent::FindStimulusInSensor(const USenseStimulusBase* StimulusComponent, ESensorType Sensor_Type, FName SensorTag, ESuccessState& SuccessState) const {
    return TArray<FStimulusFindResult>();
}

void USenseReceiverComponent::FindSensedActor(const AActor* Actor, ESensorType Sensor_Type, FName SensorTag, ESensorArrayByType SenseEventType, FSensedStimulus& Out, ESuccessState& SuccessState) const {
}

TArray<FStimulusFindResult> USenseReceiverComponent::FindActorInSensor(const AActor* Actor, ESensorType Sensor_Type, FName SensorTag, ESuccessState& SuccessState) const {
    return TArray<FStimulusFindResult>();
}

void USenseReceiverComponent::FindActorInAllSensors(const AActor* Actor, ESensorType& Sensor_Type, FName& SensorTag, ESensorArrayByType& SenseEventType, FSensedStimulus& Out, ESuccessState& SuccessState) const {
}

bool USenseReceiverComponent::DestroySensor(ESensorType Sensor_Type, FName Tag) {
    return false;
}

USensorBase* USenseReceiverComponent::CreateNewSensor(TSubclassOf<USensorBase> SensorClass, ESensorType Sensor_Type, FName Tag, ESensorThreadType ThreadType, bool bEnableNewSensor, ESuccessState& SuccessState) {
    return NULL;
}

void USenseReceiverComponent::ClearTrackTargets() {
}

void USenseReceiverComponent::BindOnReportStimulusEvent(uint16 StimulusID, FName SensorTag) {
}

void USenseReceiverComponent::AddTrackTargetComponent(USenseStimulusBase* Comp) {
}

void USenseReceiverComponent::AddTrackTargetActor(AActor* Actor) {
}


