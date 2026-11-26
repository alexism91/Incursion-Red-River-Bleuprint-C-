#include "OdinPipeline.h"

UOdinPipeline::UOdinPipeline() {
    this->Handle = NULL;
}

bool UOdinPipeline::UpdateApmPlayback(int32 effectId, TArray<float>& Samples, int32 Delay) {
    return false;
}

bool UOdinPipeline::SetViConfig(int32 effectId, FOdinViConfig Config) {
    return false;
}

bool UOdinPipeline::SetVadConfig(int32 effectId, FOdinVadConfig Config) {
    return false;
}

bool UOdinPipeline::SetApmConfig(int32 effectId, FOdinApmConfig Config) {
    return false;
}

bool UOdinPipeline::RemoveEffect(int32 effectId) {
    return false;
}

bool UOdinPipeline::MoveEffect(int32 effectId, int32 Index) {
    return false;
}

int32 UOdinPipeline::InsertViEffect(int32 Index) {
    return 0;
}

int32 UOdinPipeline::InsertVadEffect(int32 Index) {
    return 0;
}

int32 UOdinPipeline::InsertCustomEffect(int32 Index, UOdinCustomEffect* Effect) {
    return 0;
}

int32 UOdinPipeline::InsertApmEffect(int32 Index, int32 SampleRate, bool bStereo) {
    return 0;
}

FOdinViConfig UOdinPipeline::GetViConfig(int32 effectId) const {
    return FOdinViConfig{};
}

FOdinVadConfig UOdinPipeline::GetVadConfig(int32 effectId) const {
    return FOdinVadConfig{};
}

EOdinEffectType UOdinPipeline::GetEffectType(int32 effectId) const {
    return EOdinEffectType::ODIN_EFFECT_TYPE_VAD;
}

int32 UOdinPipeline::GetEffectIndex(int32 effectId) const {
    return 0;
}

int32 UOdinPipeline::GetEffectId(int32 Index) const {
    return 0;
}

int32 UOdinPipeline::GetEffectCount() const {
    return 0;
}

FOdinApmConfig UOdinPipeline::GetApmConfig(int32 effectId) const {
    return FOdinApmConfig{};
}

UOdinVolumeEffect* UOdinPipeline::CreateVolumeEffect(int32 Index) {
    return NULL;
}

UOdinRmsEffect* UOdinPipeline::CreateRmsEffect(int32 Index) {
    return NULL;
}

UOdinMuteEffect* UOdinPipeline::CreateMuteEffect(int32 Index) {
    return NULL;
}

UOdinCloneEffect* UOdinPipeline::CreateCloneEffect(int32 Index) {
    return NULL;
}

UOdinActivityEffect* UOdinPipeline::CreateActivityEffect(int32 Index) {
    return NULL;
}

UOdinVolumeEffect* UOdinPipeline::AppendVolumeEffect() {
    return NULL;
}

UOdinRmsEffect* UOdinPipeline::AppendRmsEffect() {
    return NULL;
}

UOdinMuteEffect* UOdinPipeline::AppendMuteEffect() {
    return NULL;
}

UOdinCloneEffect* UOdinPipeline::AppendCloneEffect() {
    return NULL;
}

UOdinActivityEffect* UOdinPipeline::AppendActivityEffect() {
    return NULL;
}


