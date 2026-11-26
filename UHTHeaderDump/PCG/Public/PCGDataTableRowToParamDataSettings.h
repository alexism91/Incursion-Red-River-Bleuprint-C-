#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGDataTableRowToParamDataSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, MinimalAPI)
class UPCGDataTableRowToParamDataSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName RowName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronousLoad;
    
    UPCGDataTableRowToParamDataSettings();

};

