#pragma once
#include "CoreMinimal.h"
#include "RigVMFunctionCompilationData.h"
#include "RigVMGraphFunctionHeader.h"
#include "RigVMObjectArchive.h"
#include "RigVMGraphFunctionData.generated.h"

USTRUCT(BlueprintType)
struct FRigVMGraphFunctionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMGraphFunctionHeader Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMFunctionCompilationData CompilationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SerializedCollapsedNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigVMObjectArchive CollapseNodeArchive;
    
    RIGVM_API FRigVMGraphFunctionData();
};

