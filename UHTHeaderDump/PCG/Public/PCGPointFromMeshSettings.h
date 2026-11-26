#pragma once
#include "CoreMinimal.h"
#include "PCGSettings.h"
#include "PCGPointFromMeshSettings.generated.h"

class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class UPCGPointFromMeshSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MeshPathAttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSynchronousLoad;
    
    UPCGPointFromMeshSettings();

};

