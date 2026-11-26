#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "GizmoBaseComponentInterface.h"
#include "ViewAdjustedStaticMeshGizmoComponent.generated.h"

class UGizmoViewContext;
class UMaterialInterface;
class UPrimitiveComponent;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UViewAdjustedStaticMeshGizmoComponent : public UStaticMeshComponent, public IGizmoBaseComponentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoViewContext* GizmoViewContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* SubstituteInteractionComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* HoverOverrideMaterial;
    
public:
    UViewAdjustedStaticMeshGizmoComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

