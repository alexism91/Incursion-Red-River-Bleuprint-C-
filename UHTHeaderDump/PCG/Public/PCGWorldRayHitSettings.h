#pragma once
#include "CoreMinimal.h"
#include "PCGCollisionShape.h"
#include "PCGSettings.h"
#include "PCGWorldRayHitQueryParams.h"
#include "PCGWorldRayHitSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGWorldRayHitSettings : public UPCGSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGCollisionShape CollisionShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGWorldRayHitQueryParams QueryParams;
    
    UPCGWorldRayHitSettings();

};

