#pragma once
#include "CoreMinimal.h"
#include "DynamicChildSubmix.generated.h"

class USoundSubmixBase;

USTRUCT(BlueprintType)
struct FDynamicChildSubmix {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<USoundSubmixBase*> ChildSubmixes;
    
    ENGINE_API FDynamicChildSubmix();
};

