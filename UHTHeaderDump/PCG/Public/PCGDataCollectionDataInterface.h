#pragma once
#include "CoreMinimal.h"
#include "PCGExportableDataInterface.h"
#include "PCGDataCollectionDataInterface.generated.h"

UCLASS(Blueprintable)
class UPCGDataCollectionDataInterface : public UPCGExportableDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresZeroInitialization;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ElementCountMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExposeElementCounters;
    
    UPCGDataCollectionDataInterface();

};

