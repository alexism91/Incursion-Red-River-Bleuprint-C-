#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataInterface.h"
#include "PCGInstanceDataInterface.generated.h"

UCLASS(Blueprintable)
class UPCGInstanceDataInterface : public UPCGComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputPinProvidingData;
    
    UPCGInstanceDataInterface();

};

