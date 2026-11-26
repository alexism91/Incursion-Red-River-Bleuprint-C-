#pragma once
#include "CoreMinimal.h"
#include "PCGExportableDataInterface.h"
#include "PCGTextureDataInterface.generated.h"

UCLASS(Blueprintable)
class UPCGTextureDataInterface : public UPCGExportableDataInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitializeFromDataCollection;
    
public:
    UPCGTextureDataInterface();

};

