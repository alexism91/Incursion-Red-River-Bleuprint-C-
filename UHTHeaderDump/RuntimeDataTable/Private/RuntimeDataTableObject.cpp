#include "RuntimeDataTableObject.h"

URuntimeDataTableObject::URuntimeDataTableObject() {
}

void URuntimeDataTableObject::WriteCsvToSheet(FRuntimeDataTableTokenInfo InTokenInfo, const FRuntimeDataTableOperationParams OperationParams, const FRDTGetStringDelegate& CallOnComplete, const FString& InSpreadsheetId, const int32 InSheetId, const FString& InCsv) {
}

bool URuntimeDataTableObject::ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded(const FRuntimeDataTableCallbackInfo InCallbackInfo, FEasyCsvInfo& OutCsvInfo, ERuntimeDataTableBackupResultCode& OutResultCode, const FString& BackupSavePath, const FString& BackupLoadPath) {
    return false;
}

void URuntimeDataTableObject::UpdateArrayFromCsvInfo(const TArray<int32>& ArrayToUpdate, bool& Successful, FEasyCsvInfo CSVInfo, bool MatchStructMemberNames, const UObject* OwningObject) {
}

FString URuntimeDataTableObject::GetSpreadsheetIdFromUrl(const FString& SheetURL) {
    return TEXT("");
}

int32 URuntimeDataTableObject::GetSheetIdFromUrl_Int(const FString& SheetURL) {
    return 0;
}

FString URuntimeDataTableObject::GetSheetIdFromUrl(const FString& SheetURL) {
    return TEXT("");
}

FString URuntimeDataTableObject::GetMimeCsv() {
    return TEXT("");
}

FString URuntimeDataTableObject::GetGoogleSheetsValuesBatchUpdateURL(const FString& InSpreadsheetId) {
    return TEXT("");
}

FString URuntimeDataTableObject::GetGoogleSheetsUrlPrefix() {
    return TEXT("");
}

FString URuntimeDataTableObject::GetGoogleSheetsBatchUpdateURL(const FString& InSpreadsheetId) {
    return TEXT("");
}

FString URuntimeDataTableObject::GetGoogleSheetsApiUrlPrefix() {
    return TEXT("");
}

FString URuntimeDataTableObject::GetAllObjectVariableNames(const UObject* Object, const bool bIncludeOnlyConfigVariables, const bool bIncludeInheritedVariables, const FString& MemberBlacklist) {
    return TEXT("");
}

bool URuntimeDataTableObject::GenerateTokenInfoFromString(FRuntimeDataTableTokenInfo& OutTokenInfo, const FString& InJsonString, const int32 DesiredSecondsUntilExpiration) {
    return false;
}

bool URuntimeDataTableObject::GenerateTokenInfoFromFile(FRuntimeDataTableTokenInfo& OutTokenInfo, const FString& InPathToFile, const int32 DesiredSecondsUntilExpiration) {
    return false;
}

void URuntimeDataTableObject::GenerateCsvFromArray(const TArray<int32>& ArrayToExport, FString& OutCSV_String, TArray<FName> Keys, const FString& MembersToInclude, const bool bSortColumnsAlphanumerically, const UObject* OwningObject) {
}

void URuntimeDataTableObject::BuildGoogleSheetDownloadLinkAndGetAsCsv(const FRuntimeDataTableTokenInfo InTokenInfo, const FRuntimeDataTableOperationParams OperationParams, const FRDTGetStringDelegate CallOnComplete, const FString& InSheetURL, const bool bSheetIsPublic) {
}

TArray<FName> URuntimeDataTableObject::AutoGenerateKeys() {
    return TArray<FName>();
}


