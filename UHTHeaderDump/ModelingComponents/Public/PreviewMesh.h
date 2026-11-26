#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshCommandChangeTarget -FallbackName=MeshCommandChangeTarget
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshReplacementCommandChangeTarget -FallbackName=MeshReplacementCommandChangeTarget
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=MeshVertexCommandChangeTarget -FallbackName=MeshVertexCommandChangeTarget
#include "PreviewMesh.generated.h"

class UDynamicMeshComponent;

UCLASS(Blueprintable, MinimalAPI, Transient)
class UPreviewMesh : public UObject, public IMeshVertexCommandChangeTarget, public IMeshCommandChangeTarget, public IMeshReplacementCommandChangeTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildSpatialDataStructure;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicMeshComponent* DynamicMeshComponent;
    
public:
    UPreviewMesh();


    // Fix for true pure virtual functions not being implemented
};

