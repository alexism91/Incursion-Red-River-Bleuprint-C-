#include "SensorBase.h"
#include "Templates/SubclassOf.h"

USensorBase::USensorBase() {
    this->bEnable = true;
    this->SensorTag = TEXT("SensorBase");
    this->SensorType = ESensorType::None;
    this->SensorThreadType = ESensorThreadType::Sense_Thread;
    this->UpdateTimeRate = 0.10f;
    this->DetectDepth = EOnSenseEvent::SenseForget;
    this->CallStimulusFlag = 15;
    this->ChannelSetup.AddDefaulted(1);
}

void USensorBase::SetUpdateTimeRate(float NewUpdateTimeRate) {
}

void USensorBase::SetSensorThreadType(ESensorThreadType NewSensorThreadType) {
}

void USensorBase::SetSenseResponseChannelBit(uint8 InChannel, bool bEnableChannel) {
}

void USensorBase::SetSenseChannelsBit(FBitFlag64_SenseSys InChannels) {
}

void USensorBase::SetSenseChannelParam(uint8 InChannel, bool NewSenseForcedByBestScore, int32 TrackBestScoreCount, float MinBestScore) {
}

void USensorBase::SetNewSenseForcedByBestScore(uint8 InChannel, bool bValue) {
}

void USensorBase::SetIgnoreSenseResponseChannelBit(uint8 InChannel, bool bEnableChannel) {
}

void USensorBase::SetIgnoreSenseChannelsBit(FBitFlag64_SenseSys InChannels) {
}

void USensorBase::SetEnableSensor(bool bInEnable) {
}

void USensorBase::SetBestScore_MinScore(uint8 InChannel, float MinScore) {
}

void USensorBase::SetBestScore_Count(uint8 InChannel, int32 Count) {
}

void USensorBase::ResetIgnoredActors() {
}

void USensorBase::RemoveIgnoredActors(TArray<AActor*> Actors) {
}

void USensorBase::RemoveIgnoredActor(AActor* Actor) {
}

FTransform USensorBase::GetSensorTransform() const {
    return FTransform{};
}

float USensorBase::GetSensorTestRadius() const {
    return 0.0f;
}

FBox USensorBase::GetSensorTestBoundBox() const {
    return FBox{};
}

EUpdateReady USensorBase::GetSensorReadyBP_Implementation() {
    return EUpdateReady::None;
}

AActor* USensorBase::GetSensorOwnerAs(TSubclassOf<AActor> ActorClass, ESuccessState& SuccessState) const {
    return NULL;
}

AActor* USensorBase::GetSensorOwner_BP() const {
    return NULL;
}

USenseReceiverComponent* USensorBase::GetSenseReceiverComponent_BP() const {
    return NULL;
}

USenseManager* USensorBase::GetSenseManager_BP() const {
    return NULL;
}

TArray<FSensedStimulus> USensorBase::GetSensedStimulusBySenseEvent_BP(ESensorArrayByType SenseEvent, uint8 Channel) {
    return TArray<FSensedStimulus>();
}

TArray<AActor*> USensorBase::GetSensedActorsByClass(TSubclassOf<AActor> ActorClass, ESensorArrayByType SenseState, uint8 InChannel) const {
    return TArray<AActor*>();
}

AActor* USensorBase::GetSensedActorByClass(TSubclassOf<AActor> ActorClass, ESensorArrayByType SenseState, uint8 InChannel) const {
    return NULL;
}

TArray<AActor*> USensorBase::GetIgnoredActors_BP() const {
    return TArray<AActor*>();
}

int32 USensorBase::GetChannelID(uint8 InChannel) const {
    return 0;
}

USenseStimulusBase* USensorBase::GetBestSenseStimulusComponent(uint8 InChannel) const {
    return NULL;
}

bool USensorBase::GetBestSenseStimulus(FSensedStimulus& SensedStimulus, uint8 InChannel) const {
    return false;
}

AActor* USensorBase::GetBestSenseActor(uint8 Channel) const {
    return NULL;
}

bool USensorBase::GetActorLocationFromMemory_ByComponent(const USenseStimulusBase* Comp, FVector& Location, uint8 InChannel) const {
    return false;
}

bool USensorBase::GetActorLocationFromMemory_ByActor(const AActor* Actor, FVector& Location, uint8 InChannel) const {
    return false;
}

void USensorBase::ForgetAllSensed() {
}

FStimulusFindResult USensorBase::FindStimulusInAllState_SingleChannel(const USenseStimulusBase* StimulusComponent, uint8 InChannel) {
    return FStimulusFindResult{};
}

TArray<FStimulusFindResult> USensorBase::FindStimulusInAllState(const USenseStimulusBase* StimulusComponent, FBitFlag64_SenseSys InChannels) {
    return TArray<FStimulusFindResult>();
}

bool USensorBase::FindComponent(const USenseStimulusBase* Comp, ESensorArrayByType SenseState, FSensedStimulus& SensedStimulus, uint8 InChannel) const {
    return false;
}

TArray<FSensedStimulus> USensorBase::FindBestScoreSensed(uint8 InChannel, int32 Count) const {
    return TArray<FSensedStimulus>();
}

TArray<FSensedStimulus> USensorBase::FindBestAgeSensed(uint8 InChannel, int32 Count) const {
    return TArray<FSensedStimulus>();
}

TArray<FStimulusFindResult> USensorBase::FindActorInAllState(const AActor* Actor, FBitFlag64_SenseSys InChannel) {
    return TArray<FStimulusFindResult>();
}

bool USensorBase::FindActor(const AActor* Actor, ESensorArrayByType SenseState, FSensedStimulus& SensedStimulus, uint8 InChannel) const {
    return false;
}

void USensorBase::DrawDebugSensor(bool bTest, bool bCurrentSensed, bool bLostSensed, bool bBestSensed, bool bAge, float Duration) const {
}

bool USensorBase::DestroySensorTest(TSubclassOf<USensorTestBase> SensorTestClass, int32 SensorTestIndexPlace) {
    return false;
}

USensorTestBase* USensorBase::CreateNewSensorTest(TSubclassOf<USensorTestBase> SensorTestClass, int32 SensorTestIndexPlace) {
    return NULL;
}

bool USensorBase::ContainsComponent(const USenseStimulusBase* Comp, ESensorArrayByType SenseState, uint8 InChannel) const {
    return false;
}

bool USensorBase::ContainsActor(const AActor* Actor, ESensorArrayByType SenseState, uint8 InChannel) const {
    return false;
}

void USensorBase::ClearCurrentSense(bool bCallUpdate) {
}

void USensorBase::ClearCurrentMemorySense(bool bCallForget) {
}

bool USensorBase::CheckResponseChannel(const USenseStimulusBase* StimulusComponent) const {
    return false;
}

void USensorBase::AddIgnoreActors(TArray<AActor*> IgnoredActors) {
}

void USensorBase::AddIgnoreActor(AActor* IgnoreActor) {
}


