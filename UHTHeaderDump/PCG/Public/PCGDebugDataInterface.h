#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataInterface.h"
#include "PCGDebugDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGDebugDataInterface : public UPCGComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 DebugBufferSizeFloats;
    
    UPCGDebugDataInterface();

};

