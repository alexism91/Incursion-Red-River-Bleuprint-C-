#include "SenseStimulusBase.h"
#include "Net/UnrealNetwork.h"

USenseStimulusBase::USenseStimulusBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bInvisible = false;
    this->Mobility = EStimulusMobility::Static;
    this->bEnable = true;
}

void USenseStimulusBase::SetStimulusMobility(EStimulusMobility InMobility) {
}

void USenseStimulusBase::SetScore_BP(FName SensorTag, float ScoreValue) {
}

void USenseStimulusBase::SetResponseChannelsBit(FName Tag, FBitFlag64_SenseSys NewChannels) {
}

void USenseStimulusBase::SetResponseChannel(FName Tag, uint8 Channel, bool bEnableChannel) {
}

void USenseStimulusBase::SetReceiveStimulusFlag(FName SensorTag, EReceiveStimulusFlag Flag, bool bValue) {
}

void USenseStimulusBase::SetEnableSenseStimulus(bool bNewEnable) {
}

void USenseStimulusBase::SetAge_BP(FName SensorTag, float AgeValue) {
}

void USenseStimulusBase::ReportSenseEvent(FName Tag) {
}

void USenseStimulusBase::RemoveIgnoreTraceActors(const TArray<AActor*>& Actors) {
}

void USenseStimulusBase::RemoveIgnoreTraceActor(AActor* Actor) {
}

void USenseStimulusBase::OnUnregisterReceiver(UObject* Obj) {
}

void USenseStimulusBase::OnSensedFromSpecifyActor(const AActor* Actor, FOnSensedFrom Delegate) {
}

bool USenseStimulusBase::IsSensedFrom(const AActor* Actor, FName SensorTag) const {
    return false;
}

bool USenseStimulusBase::IsRememberFrom(const AActor* Actor, FName SensorTag) const {
    return false;
}

FStimulusTagResponse USenseStimulusBase::GetStimulusSensorTagResponse(FName SensorTag, bool& bSuccess) const {
    return FStimulusTagResponse{};
}

float USenseStimulusBase::GetScore_BP(FName SensorTag) const {
    return 0.0f;
}

TArray<AActor*> USenseStimulusBase::GetLostSensedFromActors(FName SensorTag) const {
    return TArray<AActor*>();
}

TArray<AActor*> USenseStimulusBase::GetCurrentSensedFromActors(FName SensorTag) const {
    return TArray<AActor*>();
}

float USenseStimulusBase::GetAge_BP(FName SensorTag) const {
    return 0.0f;
}

void USenseStimulusBase::ClearResponseChannels(FName Tag) {
}

void USenseStimulusBase::ClearIgnoreTraceActors() {
}

void USenseStimulusBase::ClearAllResponseChannels() {
}

void USenseStimulusBase::AddIgnoreTraceActors(const TArray<AActor*>& Actors) {
}

void USenseStimulusBase::AddIgnoreTraceActor(AActor* Actor) {
}

void USenseStimulusBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(USenseStimulusBase, bInvisible);
}


