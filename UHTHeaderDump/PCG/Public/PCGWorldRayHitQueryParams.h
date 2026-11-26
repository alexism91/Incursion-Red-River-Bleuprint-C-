#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "PCGWorldRaycastQueryParams.h"
#include "PCGWorldRayHitQueryParams.generated.h"

USTRUCT(BlueprintType)
struct FPCGWorldRayHitQueryParams : public FPCGWorldRaycastQueryParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDefaultParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RayOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RayDirection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RayLength;
    
    PCG_API FPCGWorldRayHitQueryParams();
};

