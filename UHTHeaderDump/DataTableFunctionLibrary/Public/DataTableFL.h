#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "EDTFRowDirection.h"
#include "EDTFRowPosition.h"
#include "FindDataTableRowPredicateDelegate.h"
#include "DataTableFL.generated.h"

class UDataTable;
class UDataTableRowObject;
class UObject;

UCLASS(Blueprintable)
class DATATABLEFUNCTIONLIBRARY_API UDataTableFL : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDataTableFL();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ValidateRowIndex(UDataTable* DataTable, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveDataTable(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static bool ReplaceDataTableRow(UDataTable* DataTable, FName RowName, FTableRowBase Row, bool bSave);
    
    UFUNCTION(BlueprintCallable)
    static bool RemoveDataTableRow(UDataTable* DataTable, FTableRowBase Row, bool bSave);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveDataTableRowByNumber(UDataTable* DataTable, FName RowToMove, int32 MoveBy, EDTFRowDirection Direction, bool bSave);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveDataTableRowAtIndex(UDataTable* DataTable, FName RowToMove, int32 Index, bool bSave);
    
    UFUNCTION(BlueprintCallable)
    static bool MoveDataTableRow(UDataTable* DataTable, FName RowToMove, FName ReferenceRow, EDTFRowPosition RowPosition, bool bSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetDataTableSize(UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetDataTableRowNames_ByRow(UDataTable* DataTable, FTableRowBase Row);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetDataTableRowNames(const UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FName GetDataTableRowName(UDataTable* DataTable, FTableRowBase Row);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetDataTableRowAtIndex(UDataTable* DataTable, int32 Index, FTableRowBase& Row);
    
    UFUNCTION(BlueprintCallable)
    static bool GetDataTableEntryByRowColumn(UDataTable* DataTable, FName RowName, FName ColumnName, int32& OutValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetDataTableColumnNames(const UDataTable* DataTable);
    
    UFUNCTION(BlueprintCallable)
    static void GetDataTableAsArrayStruct(UDataTable* DataTable, TArray<int32>& Row);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetAsDataTableRow(UDataTableRowObject* RowObject, FTableRowBase& Row);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Text(UDataTable* DataTable, FText Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_String(UDataTable* DataTable, const FString& Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Object(UDataTable* DataTable, UObject* Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Name(UDataTable* DataTable, FName Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Int64(UDataTable* DataTable, int64 Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Int(UDataTable* DataTable, int32 Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_FVector(UDataTable* DataTable, FVector Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_FTransform(UDataTable* DataTable, FTransform Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_FRotator(UDataTable* DataTable, FRotator Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Float(UDataTable* DataTable, float Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Enum(UDataTable* DataTable, uint8 Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Class(UDataTable* DataTable, UClass* Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByProperty_Bool(UDataTable* DataTable, bool Property, FName ColumnName, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowsByPredicate(UDataTable* DataTable, FFindDataTableRowPredicate Predicate, TArray<int32>& OutRows);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Text(UDataTable* DataTable, FText Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_String(UDataTable* DataTable, const FString& Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Object(UDataTable* DataTable, UObject* Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Name(UDataTable* DataTable, FName Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Int64(UDataTable* DataTable, int64 Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Int(UDataTable* DataTable, int32 Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_FVector(UDataTable* DataTable, FVector Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_FTransform(UDataTable* DataTable, FTransform Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_FRotator(UDataTable* DataTable, FRotator Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Float(UDataTable* DataTable, float Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_FGameplayTag(UDataTable* DataTable, FGameplayTag Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Enum(UDataTable* DataTable, uint8 Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Class(UDataTable* DataTable, UClass* Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByProperty_Bool(UDataTable* DataTable, bool Property, FName ColumnName, FTableRowBase& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static bool FindDataTableRowByPredicate(UDataTable* DataTable, FFindDataTableRowPredicate Predicate, FTableRowBase& Row);
    
    UFUNCTION(BlueprintCallable)
    static bool EmptyDataTable(UDataTable* DataTable, bool bSave);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesDataTableContainRow(UDataTable* DataTable, FTableRowBase Row);
    
    UFUNCTION(BlueprintCallable)
    static bool AddDataTableRows(UDataTable* DataTable, TArray<FTableRowBase> Rows, bool bReverse, bool bSave);
    
    UFUNCTION(BlueprintCallable)
    static bool AddDataTableRow(UDataTable* DataTable, FTableRowBase Row, FName RowName, bool bSave);
    
};

