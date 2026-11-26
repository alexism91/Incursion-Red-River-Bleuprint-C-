#pragma once
#include "CoreMinimal.h"
#include "UIComponentTarget.generated.h"

class UUIComponent;

USTRUCT(BlueprintType)
struct FUIComponentTarget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TargetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUIComponent* Component;
    
public:
    UMG_API FUIComponentTarget();
};

