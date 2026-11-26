#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeometryCollectionExternalRenderInterface.h"
#include "GeometryCollectionRootProxyRenderer.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI)
class UGeometryCollectionRootProxyRenderer : public UObject, public IGeometryCollectionExternalRenderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    
public:
    UGeometryCollectionRootProxyRenderer();


    // Fix for true pure virtual functions not being implemented
};

