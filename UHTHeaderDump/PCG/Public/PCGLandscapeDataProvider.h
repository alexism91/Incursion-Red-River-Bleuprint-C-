#pragma once
#include "CoreMinimal.h"
#include "PCGComputeDataProvider.h"
#include "PCGLandscapeDataProvider.generated.h"

class URuntimeVirtualTexture;

UCLASS(Blueprintable)
class UPCGLandscapeDataProvider : public UPCGComputeDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTexture* BaseColorVirtualTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTexture* HeightVirtualTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTexture* NormalVirtualTexture;
    
public:
    UPCGLandscapeDataProvider();

};

