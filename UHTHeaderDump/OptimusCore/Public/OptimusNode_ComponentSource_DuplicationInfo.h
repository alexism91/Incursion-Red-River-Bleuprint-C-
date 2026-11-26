#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "OptimusNode_ComponentSource_DuplicationInfo.generated.h"

class UOptimusComponentSource;

USTRUCT(BlueprintType)
struct FOptimusNode_ComponentSource_DuplicationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BindingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UOptimusComponentSource> ComponentType;
    
    OPTIMUSCORE_API FOptimusNode_ComponentSource_DuplicationInfo();
};

