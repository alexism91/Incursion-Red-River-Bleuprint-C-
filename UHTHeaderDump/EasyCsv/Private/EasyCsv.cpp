#include "EasyCsv.h"

UEasyCsv::UEasyCsv() {
}

bool UEasyCsv::SaveStringToFileWithFullPath(const FString& InString, const FString& InFullPath) {
    return false;
}

bool UEasyCsv::SaveStringToFile(const FString& InString, const FString& InDirectory, const FString& Filename, const FString& Extension) {
    return false;
}

FString UEasyCsv::ReplaceEscapedCharacters(const FString& InString) {
    return TEXT("");
}

bool UEasyCsv::MakeCsvInfoStructFromString(const FString& InString, FEasyCsvInfo& OutCsvInfo, bool ParseHeaders, bool ParseKeys) {
    return false;
}

bool UEasyCsv::MakeCsvInfoStructFromFile(const FString& InPath, FEasyCsvInfo& OutCsvInfo, bool ParseHeaders, bool ParseKeys) {
    return false;
}

bool UEasyCsv::LoadStringFromLocalFile(const FString& InPath, FString& OutString) {
    return false;
}

FString UEasyCsv::GetRowValueAsString(const FEasyCsvInfo& CSV_Info, const FString& ColumnName, const FName RowKey, bool& success) {
    return TEXT("");
}

int32 UEasyCsv::GetRowCount(const FEasyCsvInfo& CSV_Info) {
    return 0;
}

TArray<FString> UEasyCsv::GetRowAsStringArray(const FEasyCsvInfo& CSV_Info, const FName RowKey, bool& success) {
    return TArray<FString>();
}

TArray<FName> UEasyCsv::GetMapKeys(const FEasyCsvInfo& CSV_Info) {
    return TArray<FName>();
}

int32 UEasyCsv::GetMapKeyIndex(const FEasyCsvInfo& CSV_Info, const FName Key) {
    return 0;
}

TArray<FString> UEasyCsv::GetMapHeaders(const FEasyCsvInfo& CSV_Info) {
    return TArray<FString>();
}

void UEasyCsv::GetFTextComponentsFromRepresentativeFString(const FString& InString, FString& Namespace, FString& Key, FString& SourceString) {
}

int32 UEasyCsv::GetColumnCount(const FEasyCsvInfo& CSV_Info) {
    return 0;
}

TArray<FString> UEasyCsv::GetColumnAsStringArray(const FEasyCsvInfo& CSV_Info, const FString& ColumnName, bool& success) {
    return TArray<FString>();
}

FString UEasyCsv::EscapeCharacters(const FString& InString) {
    return TEXT("");
}

bool UEasyCsv::DoesStringRepresentContainer(const FString& InString) {
    return false;
}

TArray<FRotator> UEasyCsv::ConvertStringToRotatorArray(const FString& InString) {
    return TArray<FRotator>();
}

FRotator UEasyCsv::ConvertStringToRotator(const FString& InString) {
    return FRotator{};
}

TArray<FQuat> UEasyCsv::ConvertStringToQuatArray(const FString& InString) {
    return TArray<FQuat>();
}

FQuat UEasyCsv::ConvertStringToQuat(const FString& InString) {
    return FQuat{};
}

TArray<FRotator> UEasyCsv::ConvertQuatStringToRotatorArray(const FString& InString) {
    return TArray<FRotator>();
}

FRotator UEasyCsv::ConvertQuatStringToRotator(const FString& InString) {
    return FRotator{};
}


