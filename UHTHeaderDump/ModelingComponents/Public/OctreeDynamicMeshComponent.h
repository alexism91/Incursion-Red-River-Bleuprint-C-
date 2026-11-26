#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryFramework -ObjectName=BaseDynamicMeshComponent -FallbackName=BaseDynamicMeshComponent
#include "OctreeDynamicMeshComponent.generated.h"

class UDynamicMesh;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDynamicMesh* MeshObject;
    
public:
    UOctreeDynamicMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDynamicMesh(UDynamicMesh* NewMesh);
    
};

