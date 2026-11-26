#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=EasyCsv -ObjectName=EasyCsvInfo -FallbackName=EasyCsvInfo
#include "ERuntimeDataTableBackupResultCode.h"
#include "RDTGetStringDelegateDelegate.h"
#include "RuntimeDataTableCallbackInfo.h"
#include "RuntimeDataTableOperationParams.h"
#include "RuntimeDataTableTokenInfo.h"
#include "RuntimeDataTableObject.generated.h"

UCLASS(Blueprintable)
class RUNTIMEDATATABLE_API URuntimeDataTableObject : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEasyCsvInfo CachedCsvInfo;
    
    URuntimeDataTableObject();

    UFUNCTION(BlueprintCallable)
    static void WriteCsvToSheet(FRuntimeDataTableTokenInfo InTokenInfo, const FRuntimeDataTableOperationParams OperationParams, const FRDTGetStringDelegate& CallOnComplete, const FString& InSpreadsheetId, const int32 InSheetId, const FString& InCsv);
    
    UFUNCTION(BlueprintCallable)
    static bool ValidateGoogleSheetsDownloadAndLoadBackupIfNeeded(const FRuntimeDataTableCallbackInfo InCallbackInfo, FEasyCsvInfo& OutCsvInfo, ERuntimeDataTableBackupResultCode& OutResultCode, const FString& BackupSavePath, const FString& BackupLoadPath);
    
    UFUNCTION(BlueprintCallable)
    static void UpdateArrayFromCsvInfo(const TArray<int32>& ArrayToUpdate, bool& Successful, FEasyCsvInfo CSVInfo, bool MatchStructMemberNames, const UObject* OwningObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSpreadsheetIdFromUrl(const FString& SheetURL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSheetIdFromUrl_Int(const FString& SheetURL);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetSheetIdFromUrl(const FString& SheetURL);
    
    UFUNCTION(BlueprintCallable)
    static FString GetMimeCsv();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGoogleSheetsValuesBatchUpdateURL(const FString& InSpreadsheetId);
    
    UFUNCTION(BlueprintCallable)
    static FString GetGoogleSheetsUrlPrefix();
    
    UFUNCTION(BlueprintCallable)
    static FString GetGoogleSheetsBatchUpdateURL(const FString& InSpreadsheetId);
    
    UFUNCTION(BlueprintCallable)
    static FString GetGoogleSheetsApiUrlPrefix();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetAllObjectVariableNames(const UObject* Object, const bool bIncludeOnlyConfigVariables, const bool bIncludeInheritedVariables, const FString& MemberBlacklist);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateTokenInfoFromString(FRuntimeDataTableTokenInfo& OutTokenInfo, const FString& InJsonString, const int32 DesiredSecondsUntilExpiration);
    
    UFUNCTION(BlueprintCallable)
    static bool GenerateTokenInfoFromFile(FRuntimeDataTableTokenInfo& OutTokenInfo, const FString& InPathToFile, const int32 DesiredSecondsUntilExpiration);
    
    UFUNCTION(BlueprintCallable)
    static void GenerateCsvFromArray(const TArray<int32>& ArrayToExport, FString& OutCSV_String, TArray<FName> Keys, const FString& MembersToInclude, const bool bSortColumnsAlphanumerically, const UObject* OwningObject);
    
    UFUNCTION(BlueprintCallable)
    static void BuildGoogleSheetDownloadLinkAndGetAsCsv(const FRuntimeDataTableTokenInfo InTokenInfo, const FRuntimeDataTableOperationParams OperationParams, const FRDTGetStringDelegate CallOnComplete, const FString& InSheetURL, const bool bSheetIsPublic);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FName> AutoGenerateKeys();
    
};

