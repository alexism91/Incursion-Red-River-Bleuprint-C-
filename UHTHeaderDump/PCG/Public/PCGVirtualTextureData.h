#pragma once
#include "CoreMinimal.h"
#include "PCGSurfaceData.h"
#include "PCGVirtualTextureData.generated.h"

class URuntimeVirtualTexture;

UCLASS(Blueprintable)
class UPCGVirtualTextureData : public UPCGSurfaceData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URuntimeVirtualTexture* RuntimeVirtualTexture;
    
public:
    UPCGVirtualTextureData();

};

