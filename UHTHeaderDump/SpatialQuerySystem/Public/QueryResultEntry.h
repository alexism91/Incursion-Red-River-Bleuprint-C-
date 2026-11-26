#pragma once
#include "CoreMinimal.h"
#include "QuerySystemData.h"
#include "QueryResultEntry.generated.h"

class UQuerySystemComponent;

USTRUCT(BlueprintType)
struct SPATIALQUERYSYSTEM_API FQueryResultEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UQuerySystemComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuerySystemData> Data;
    
    FQueryResultEntry();
};

