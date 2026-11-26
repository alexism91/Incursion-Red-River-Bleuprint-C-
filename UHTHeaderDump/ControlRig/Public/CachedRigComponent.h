#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "CachedRigComponent.generated.h"

USTRUCT(BlueprintType)
struct FCachedRigComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedElement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Index;
    
public:
    CONTROLRIG_API FCachedRigComponent();
};

