#pragma once
#include "CoreMinimal.h"
#include "PrivateMaterialParameter.h"
#include "DynamicMaterialSetup.generated.h"

USTRUCT(BlueprintType)
struct FDynamicMaterialSetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPrivateMaterialParameter> MaterialParameters;
    
    TEST_C_API FDynamicMaterialSetup();
};

