#pragma once
#include "CoreMinimal.h"
#include "OptimusConstantIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FOptimusConstantIdentifier {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NodePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConstantName;
    
    OPTIMUSCORE_API FOptimusConstantIdentifier();
};

