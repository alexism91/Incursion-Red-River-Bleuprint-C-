#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EasyCsvInfo.h"
#include "EasyCsv.generated.h"

UCLASS(Blueprintable)
class EASYCSV_API UEasyCsv : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UEasyCsv();

    UFUNCTION(BlueprintCallable)
    static bool SaveStringToFileWithFullPath(const FString& InString, const FString& InFullPath);
    
    UFUNCTION(BlueprintCallable)
    static bool SaveStringToFile(const FString& InString, const FString& InDirectory, const FString& Filename, const FString& Extension);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString ReplaceEscapedCharacters(const FString& InString);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeCsvInfoStructFromString(const FString& InString, FEasyCsvInfo& OutCsvInfo, bool ParseHeaders, bool ParseKeys);
    
    UFUNCTION(BlueprintCallable)
    static bool MakeCsvInfoStructFromFile(const FString& InPath, FEasyCsvInfo& OutCsvInfo, bool ParseHeaders, bool ParseKeys);
    
    UFUNCTION(BlueprintCallable)
    static bool LoadStringFromLocalFile(const FString& InPath, FString& OutString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetRowValueAsString(const FEasyCsvInfo& CSV_Info, const FString& ColumnName, const FName RowKey, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRowCount(const FEasyCsvInfo& CSV_Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetRowAsStringArray(const FEasyCsvInfo& CSV_Info, const FName RowKey, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> GetMapKeys(const FEasyCsvInfo& CSV_Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMapKeyIndex(const FEasyCsvInfo& CSV_Info, const FName Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetMapHeaders(const FEasyCsvInfo& CSV_Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void GetFTextComponentsFromRepresentativeFString(const FString& InString, FString& Namespace, FString& Key, FString& SourceString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetColumnCount(const FEasyCsvInfo& CSV_Info);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetColumnAsStringArray(const FEasyCsvInfo& CSV_Info, const FString& ColumnName, bool& success);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString EscapeCharacters(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesStringRepresentContainer(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRotator> ConvertStringToRotatorArray(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator ConvertStringToRotator(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FQuat> ConvertStringToQuatArray(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FQuat ConvertStringToQuat(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRotator> ConvertQuatStringToRotatorArray(const FString& InString);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FRotator ConvertQuatStringToRotator(const FString& InString);
    
};

