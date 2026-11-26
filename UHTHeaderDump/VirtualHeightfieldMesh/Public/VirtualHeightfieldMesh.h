#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "VirtualHeightfieldMesh.generated.h"

class UVirtualHeightfieldMeshComponent;

UCLASS(Blueprintable, MinimalAPI, NoExport)
class AVirtualHeightfieldMesh : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVirtualHeightfieldMeshComponent* VirtualHeightfieldMeshComponent;
    
public:
    AVirtualHeightfieldMesh(const FObjectInitializer& ObjectInitializer);

};

