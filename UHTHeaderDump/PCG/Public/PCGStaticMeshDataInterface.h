#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataInterface.h"
#include "PCGStaticMeshDataInterface.generated.h"

UCLASS(Blueprintable)
class UPCGStaticMeshDataInterface : public UPCGComputeDataInterface {
    GENERATED_BODY()
public:
    UPCGStaticMeshDataInterface();

};

