#pragma once
#include "CoreMinimal.h"
#include "NetObjectFilterConfig.h"
#include "NetObjectGridFilterProfile.h"
#include "NetObjectGridFilterConfig.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Engine)
class UNetObjectGridFilterConfig : public UNetObjectFilterConfig {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ViewPosRelevancyFrameCount;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 DefaultFrameCountBeforeCulling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSizeX;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CellSizeY;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefaultCullDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseExactCullDistance;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNetObjectGridFilterProfile> FilterProfiles;
    
    UNetObjectGridFilterConfig();

};

