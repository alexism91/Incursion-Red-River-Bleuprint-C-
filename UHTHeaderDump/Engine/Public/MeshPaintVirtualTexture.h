#pragma once
#include "CoreMinimal.h"
#include "Texture2D.h"
#include "MeshPaintVirtualTexture.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable, MinimalAPI)
class UMeshPaintVirtualTexture : public UTexture2D {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UPrimitiveComponent> OwningComponent;
    
    UMeshPaintVirtualTexture();

};

