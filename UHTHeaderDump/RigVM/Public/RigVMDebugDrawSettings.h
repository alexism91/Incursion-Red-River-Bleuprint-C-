#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESceneDepthPriorityGroup -FallbackName=ESceneDepthPriorityGroup
#include "RigVMDebugDrawSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigVMDebugDrawSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ESceneDepthPriorityGroup> DepthPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LifeTime;
    
    RIGVM_API FRigVMDebugDrawSettings();
};

