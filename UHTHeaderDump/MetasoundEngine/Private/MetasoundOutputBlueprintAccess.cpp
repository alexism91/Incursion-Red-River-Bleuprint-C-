#include "MetasoundOutputBlueprintAccess.h"

UMetasoundOutputBlueprintAccess::UMetasoundOutputBlueprintAccess() {
}

bool UMetasoundOutputBlueprintAccess::IsTime(const FMetaSoundOutput& Output) {
    return false;
}

bool UMetasoundOutputBlueprintAccess::IsString(const FMetaSoundOutput& Output) {
    return false;
}

bool UMetasoundOutputBlueprintAccess::IsInt32(const FMetaSoundOutput& Output) {
    return false;
}

bool UMetasoundOutputBlueprintAccess::IsFloat(const FMetaSoundOutput& Output) {
    return false;
}

bool UMetasoundOutputBlueprintAccess::IsBool(const FMetaSoundOutput& Output) {
    return false;
}

double UMetasoundOutputBlueprintAccess::GetTimeSeconds(const FMetaSoundOutput& Output, bool& success) {
    return 0.0;
}

FString UMetasoundOutputBlueprintAccess::GetString(const FMetaSoundOutput& Output, bool& success) {
    return TEXT("");
}

int32 UMetasoundOutputBlueprintAccess::GetInt32(const FMetaSoundOutput& Output, bool& success) {
    return 0;
}

float UMetasoundOutputBlueprintAccess::GetFloat(const FMetaSoundOutput& Output, bool& success) {
    return 0.0f;
}

bool UMetasoundOutputBlueprintAccess::GetBool(const FMetaSoundOutput& Output, bool& success) {
    return false;
}


