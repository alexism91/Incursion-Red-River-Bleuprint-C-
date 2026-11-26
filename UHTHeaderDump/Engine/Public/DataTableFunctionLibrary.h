#pragma once
#include "CoreMinimal.h"
#include "BlueprintFunctionLibrary.h"
#include "EEvaluateCurveTableResult.h"
#include "TableRowBase.h"
#include "DataTableFunctionLibrary.generated.h"

class UCurveTable;
class UDataTable;
class UScriptStruct;

UCLASS(Blueprintable, MinimalAPI)
class UDataTableFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataTableFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UScriptStruct* GetDataTableRowStruct(const UDataTable* Table);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataTableRowNames(const UDataTable* Table, TArray<FName>& OutRowNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDataTableRowFromName(UDataTable* Table, FName RowName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataTableColumnNames(const UDataTable* Table, TArray<FName>& OutColumnNames);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDataTableColumnNameFromExportName(const UDataTable* Table, const FString& ColumnExportName, FName& OutColumnName);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataTableColumnExportNames(const UDataTable* Table, TArray<FString>& OutExportColumnNames);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetDataTableColumnAsString(const UDataTable* DataTable, FName PropertyName);
    
    UFUNCTION(BlueprintCallable)
    static void EvaluateCurveTableRow(UCurveTable* CurveTable, FName RowName, float InXY, TEnumAsByte<EEvaluateCurveTableResult::Type>& OutResult, float& OutXY, const FString& ContextString);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesDataTableRowExist(const UDataTable* Table, FName RowName);
    
};

