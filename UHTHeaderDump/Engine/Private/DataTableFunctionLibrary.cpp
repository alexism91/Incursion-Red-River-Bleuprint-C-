#include "DataTableFunctionLibrary.h"

UDataTableFunctionLibrary::UDataTableFunctionLibrary() {
}

UScriptStruct* UDataTableFunctionLibrary::GetDataTableRowStruct(const UDataTable* Table) {
    return NULL;
}

void UDataTableFunctionLibrary::GetDataTableRowNames(const UDataTable* Table, TArray<FName>& OutRowNames) {
}

bool UDataTableFunctionLibrary::GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase& OutRow) {
    return false;
}

void UDataTableFunctionLibrary::GetDataTableColumnNames(const UDataTable* Table, TArray<FName>& OutColumnNames) {
}

bool UDataTableFunctionLibrary::GetDataTableColumnNameFromExportName(const UDataTable* Table, const FString& ColumnExportName, FName& OutColumnName) {
    return false;
}

void UDataTableFunctionLibrary::GetDataTableColumnExportNames(const UDataTable* Table, TArray<FString>& OutExportColumnNames) {
}

TArray<FString> UDataTableFunctionLibrary::GetDataTableColumnAsString(const UDataTable* DataTable, FName PropertyName) {
    return TArray<FString>();
}

void UDataTableFunctionLibrary::EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult::Type>& OutResult, float& OutXY, const FString& ContextString) {
}

bool UDataTableFunctionLibrary::DoesDataTableRowExist(const UDataTable* Table, FName RowName) {
    return false;
}


