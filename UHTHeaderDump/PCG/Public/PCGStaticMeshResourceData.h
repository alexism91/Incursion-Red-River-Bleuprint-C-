#pragma once
#include "CoreMinimal.h"
#include "PCGResourceData.h"
#include "PCGStaticMeshResourceData.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class UPCGStaticMeshResourceData : public UPCGResourceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
public:
    UPCGStaticMeshResourceData();

};

