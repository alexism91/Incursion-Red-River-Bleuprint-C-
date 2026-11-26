#pragma once
#include "CoreMinimal.h"
#include "EPCGTextureResourceType.h"
#include "PCGBaseTextureData.h"
#include "PCGTextureData.generated.h"

class UTexture;

UCLASS(Blueprintable, MinimalAPI)
class UPCGTextureData : public UPCGBaseTextureData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UTexture> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TextureIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bSuccessfullyInitialized;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGTextureResourceType ResourceType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReadbackFromGPUInitiated;
    
    UPCGTextureData();

};

