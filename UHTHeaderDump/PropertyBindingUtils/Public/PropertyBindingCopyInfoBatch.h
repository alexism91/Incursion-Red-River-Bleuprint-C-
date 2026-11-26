#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "PropertyBindingIndex16.h"
#include "PropertyBindingCopyInfoBatch.generated.h"

USTRUCT(BlueprintType)
struct FPropertyBindingCopyInfoBatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct TargetStruct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingIndex16 BindingsBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingIndex16 BindingsEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingIndex16 PropertyFunctionsBegin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyBindingIndex16 PropertyFunctionsEnd;
    
    PROPERTYBINDINGUTILS_API FPropertyBindingCopyInfoBatch();
};

