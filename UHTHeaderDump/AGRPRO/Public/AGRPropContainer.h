#pragma once
#include "CoreMinimal.h"
#include "AGRPropContainer.generated.h"

class UVerticalBox;

USTRUCT(BlueprintType)
struct FAGRPropContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* Container;
    
    AGRPRO_API FAGRPropContainer();
};

