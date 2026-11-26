#pragma once
#include "CoreMinimal.h"
#include "RigVMDebugDrawSettings.h"
#include "RigVMStruct.h"
#include "RigVMFunction_DebugBase.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_DebugBase : public FRigVMStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMDebugDrawSettings DebugDrawSettings;
    
    RIGVM_API FRigVMFunction_DebugBase();
};

