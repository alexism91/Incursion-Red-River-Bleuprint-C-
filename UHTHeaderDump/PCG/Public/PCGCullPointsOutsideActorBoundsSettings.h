#pragma once
#include "CoreMinimal.h"
#include "EPCGCullPointsMode.h"
#include "PCGSettings.h"
#include "PCGCullPointsOutsideActorBoundsSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGCullPointsOutsideActorBoundsSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BoundsExpansion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGCullPointsMode Mode;
    
    UPCGCullPointsOutsideActorBoundsSettings();

};

