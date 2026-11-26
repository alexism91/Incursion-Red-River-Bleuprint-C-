#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=RigVM -ObjectName=RigVMUserWorkflowOptions -FallbackName=RigVMUserWorkflowOptions
#include "RigElementKey.h"
#include "ControlRigWorkflowOptions.generated.h"

class URigHierarchy;

UCLASS(Blueprintable, MinimalAPI)
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URigHierarchy* Hierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Selection;
    
    UControlRigWorkflowOptions();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool EnsureAtLeastOneRigElementSelected() const;
    
};

