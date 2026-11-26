#pragma once
#include "CoreMinimal.h"
#include "DataRegistryType.h"
#include "SoftDataRegistryOrTable.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FSoftDataRegistryOrTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDataRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataTable> Table;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataRegistryType RegistryType;
    
    DATAREGISTRY_API FSoftDataRegistryOrTable();
};

