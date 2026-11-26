#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=EPhysicalSurface -FallbackName=EPhysicalSurface
#include "EGameplayCueNotify_LocallyControlledPolicy.h"
#include "EGameplayCueNotify_LocallyControlledSource.h"
#include "GameplayCueNotify_SpawnCondition.generated.h"

USTRUCT(BlueprintType)
struct FGameplayCueNotify_SpawnCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayCueNotify_LocallyControlledSource LocallyControlledSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGameplayCueNotify_LocallyControlledPolicy LocallyControlledPolicy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChanceToPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> AllowedSurfaceTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EPhysicalSurface>> RejectedSurfaceTypes;
    
    GAMEPLAYABILITIES_API FGameplayCueNotify_SpawnCondition();
};

