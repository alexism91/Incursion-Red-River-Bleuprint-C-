#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "CachedRigElement.h"
#include "ConstraintParent.h"
#include "RigUnit_HighlevelBase.h"
#include "RigUnit_ParentConstraintMath_AdvancedSettings.h"
#include "RigUnit_ParentConstraintMath.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_ParentConstraintMath : public FRigUnit_HighlevelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConstraintParent> Parents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigUnit_ParentConstraintMath_AdvancedSettings AdvancedSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Output;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedRigElement> ParentCaches;
    
    CONTROLRIG_API FRigUnit_ParentConstraintMath();
};

