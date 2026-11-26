#pragma once
#include "CoreMinimal.h"
#include "PCGExportableDataProvider.h"
#include "PCGDataCollectionDataProvider.generated.h"

UCLASS(Blueprintable)
class UPCGDataCollectionDataProvider : public UPCGExportableDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ElementCountMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresZeroInitialization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExposeElementCounters;
    
    UPCGDataCollectionDataProvider();

};

