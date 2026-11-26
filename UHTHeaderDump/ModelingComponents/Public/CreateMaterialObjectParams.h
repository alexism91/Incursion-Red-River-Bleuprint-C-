#pragma once
#include "CoreMinimal.h"
#include "CreateMaterialObjectParams.generated.h"

class UMaterialInterface;
class UObject;
class UWorld;

USTRUCT(BlueprintType)
struct FCreateMaterialObjectParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* TargetWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* StoreRelativeToObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialToDuplicate;
    
    MODELINGCOMPONENTS_API FCreateMaterialObjectParams();
};

