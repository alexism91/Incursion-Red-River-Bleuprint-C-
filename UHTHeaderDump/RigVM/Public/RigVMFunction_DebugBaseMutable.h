#pragma once
#include "CoreMinimal.h"
#include "RigVMDebugDrawSettings.h"
#include "RigVMStructMutable.h"
#include "RigVMFunction_DebugBaseMutable.generated.h"

USTRUCT(BlueprintType)
struct FRigVMFunction_DebugBaseMutable : public FRigVMStructMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMDebugDrawSettings DebugDrawSettings;
    
    RIGVM_API FRigVMFunction_DebugBaseMutable();
};

