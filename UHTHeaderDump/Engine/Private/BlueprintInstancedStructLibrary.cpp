#include "BlueprintInstancedStructLibrary.h"

UBlueprintInstancedStructLibrary::UBlueprintInstancedStructLibrary() {
}

void UBlueprintInstancedStructLibrary::SetInstancedStructValue(FInstancedStruct& InstancedStruct, const int32& Value) {
}

void UBlueprintInstancedStructLibrary::Reset(FInstancedStruct& InstancedStruct, const UScriptStruct* StructType) {
}

bool UBlueprintInstancedStructLibrary::NotEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B) {
    return false;
}

FInstancedStruct UBlueprintInstancedStructLibrary::MakeInstancedStruct(const int32& Value) {
    return FInstancedStruct{};
}

bool UBlueprintInstancedStructLibrary::IsValid_InstancedStruct(const FInstancedStruct& InstancedStruct) {
    return false;
}

EStructUtilsResult UBlueprintInstancedStructLibrary::IsInstancedStructValid(const FInstancedStruct& InstancedStruct) {
    return EStructUtilsResult::Valid;
}

void UBlueprintInstancedStructLibrary::GetInstancedStructValue(EStructUtilsResult& ExecResult, const FInstancedStruct& InstancedStruct, int32& Value) {
}

bool UBlueprintInstancedStructLibrary::EqualEqual_InstancedStruct(const FInstancedStruct& A, const FInstancedStruct& B) {
    return false;
}


