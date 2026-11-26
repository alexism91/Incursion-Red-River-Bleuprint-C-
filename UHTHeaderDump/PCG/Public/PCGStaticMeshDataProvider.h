#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGStaticMeshDataProvider.generated.h"

class UStaticMesh;

UCLASS(Blueprintable)
class UPCGStaticMeshDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* LoadedStaticMesh;
    
    UPCGStaticMeshDataProvider();

};

