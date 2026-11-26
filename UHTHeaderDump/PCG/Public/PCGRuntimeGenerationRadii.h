#pragma once
#include "CoreMinimal.h"
#include "PCGRuntimeGenerationRadii.generated.h"

USTRUCT(BlueprintType)
struct FPCGRuntimeGenerationRadii {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius1600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius3200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius6400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius12800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius25600;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius51200;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius102400;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double GenerationRadius204800;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double CleanupRadiusMultiplier;
    
    PCG_API FPCGRuntimeGenerationRadii();
};

