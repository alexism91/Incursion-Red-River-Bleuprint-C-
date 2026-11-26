#pragma once
#include "CoreMinimal.h"
#include "EPCGExclusiveDataType.h"
#include "PCGExternalDataSettings.h"
#include "PCGLoadDataTableSettings.generated.h"

class UDataTable;

UCLASS(Blueprintable, MinimalAPI)
class UPCGLoadDataTableSettings : public UPCGExternalDataSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> DataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGExclusiveDataType OutputType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronousLoad;
    
    UPCGLoadDataTableSettings();

};

