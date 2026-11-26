#include "NiagaraDataChannelReader.h"

UNiagaraDataChannelReader::UNiagaraDataChannelReader() {
    this->Owner = NULL;
}

FVector4 UNiagaraDataChannelReader::ReadVector4(FName VarName, int32 Index, bool& IsValid) const {
    return FVector4{};
}

FVector2D UNiagaraDataChannelReader::ReadVector2D(FName VarName, int32 Index, bool& IsValid) const {
    return FVector2D{};
}

FVector UNiagaraDataChannelReader::ReadVector(FName VarName, int32 Index, bool& IsValid) const {
    return FVector{};
}

FNiagaraSpawnInfo UNiagaraDataChannelReader::ReadSpawnInfo(FName VarName, int32 Index, bool& IsValid) const {
    return FNiagaraSpawnInfo{};
}

FQuat UNiagaraDataChannelReader::ReadQuat(FName VarName, int32 Index, bool& IsValid) const {
    return FQuat{};
}

FVector UNiagaraDataChannelReader::ReadPosition(FName VarName, int32 Index, bool& IsValid) const {
    return FVector{};
}

FLinearColor UNiagaraDataChannelReader::ReadLinearColor(FName VarName, int32 Index, bool& IsValid) const {
    return FLinearColor{};
}

int32 UNiagaraDataChannelReader::ReadInt(FName VarName, int32 Index, bool& IsValid) const {
    return 0;
}

FNiagaraID UNiagaraDataChannelReader::ReadID(FName VarName, int32 Index, bool& IsValid) const {
    return FNiagaraID{};
}

double UNiagaraDataChannelReader::ReadFloat(FName VarName, int32 Index, bool& IsValid) const {
    return 0.0;
}

uint8 UNiagaraDataChannelReader::ReadEnum(FName VarName, int32 Index, bool& IsValid) const {
    return 0;
}

bool UNiagaraDataChannelReader::ReadBool(FName VarName, int32 Index, bool& IsValid) const {
    return false;
}

int32 UNiagaraDataChannelReader::Num() const {
    return 0;
}

bool UNiagaraDataChannelReader::InitAccess(FNiagaraDataChannelSearchParameters SearchParams, bool bReadPrevFrameData) {
    return false;
}


