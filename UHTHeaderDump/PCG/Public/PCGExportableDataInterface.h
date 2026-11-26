#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataInterface.h"
#include "PCGExportableDataInterface.generated.h"

UCLASS(Abstract, Blueprintable)
class UPCGExportableDataInterface : public UPCGComputeDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresExport;
    
public:
    UPCGExportableDataInterface();

};

