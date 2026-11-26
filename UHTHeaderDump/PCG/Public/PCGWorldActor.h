#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "PCGWorldActor.generated.h"

class UPCGLandscapeCache;

UCLASS(Blueprintable, MinimalAPI, NoExport, NotPlaceable, Config=Engine)
class APCGWorldActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 PartitionGridSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPCGLandscapeCache* LandscapeCacheObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableWorldPartitionGenerationSources;
    
    APCGWorldActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    int64 BP_GetPCGGridSize() const;
    
};

