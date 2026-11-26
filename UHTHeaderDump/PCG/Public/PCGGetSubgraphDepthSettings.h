#pragma once
#include "CoreMinimal.h"
#include "EPCGSubgraphDepthMode.h"
#include "PCGSettings.h"
#include "PCGGetSubgraphDepthSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGetSubgraphDepthSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGSubgraphDepthMode Mode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DistanceRelativeToUpstreamGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuietInvalidDepthQueries;
    
    UPCGGetSubgraphDepthSettings();

};

