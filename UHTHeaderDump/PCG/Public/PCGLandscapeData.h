#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "PCGLandscapeDataProps.h"
#include "PCGSurfaceData.h"
#include "PCGLandscapeData.generated.h"

class ALandscapeProxy;

UCLASS(Blueprintable, MinimalAPI)
class UPCGLandscapeData : public UPCGSurfaceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<ALandscapeProxy>> Landscapes;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGLandscapeDataProps DataProps;
    
public:
    UPCGLandscapeData();

};

