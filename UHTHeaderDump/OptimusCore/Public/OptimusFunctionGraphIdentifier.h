#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "OptimusFunctionGraphIdentifier.generated.h"

class UOptimusDeformer;

USTRUCT(BlueprintType)
struct FOptimusFunctionGraphIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UOptimusDeformer* Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
    OPTIMUSCORE_API FOptimusFunctionGraphIdentifier();
};

