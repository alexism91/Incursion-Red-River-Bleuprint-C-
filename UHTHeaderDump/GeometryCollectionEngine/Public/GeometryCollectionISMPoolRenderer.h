#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeometryCollectionExternalRenderInterface.h"
#include "GeometryCollectionISMPoolRenderer.generated.h"

class UISMPoolComponent;

UCLASS(Blueprintable)
class UGeometryCollectionISMPoolRenderer : public UObject, public IGeometryCollectionExternalRenderInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UISMPoolComponent* CachedISMPoolComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UISMPoolComponent* LocalISMPoolComponent;
    
public:
    UGeometryCollectionISMPoolRenderer();


    // Fix for true pure virtual functions not being implemented
};

