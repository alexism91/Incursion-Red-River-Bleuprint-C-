#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ComputeFramework -ObjectName=ComputeDataProvider -FallbackName=ComputeDataProvider
#include "PCGVirtualTextureDataProvider.generated.h"

class URuntimeVirtualTexture;

UCLASS(Blueprintable)
class UPCGVirtualTextureDataProvider : public UComputeDataProvider {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URuntimeVirtualTexture*> VirtualTextures;
    
public:
    UPCGVirtualTextureDataProvider();

};

