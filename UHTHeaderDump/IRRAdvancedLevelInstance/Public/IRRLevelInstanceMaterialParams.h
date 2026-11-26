#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "IRRLevelInstanceMaterialParams.generated.h"

USTRUCT(BlueprintType)
struct FIRRLevelInstanceMaterialParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> ScalarParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FLinearColor> VectorParams;
    
    IRRADVANCEDLEVELINSTANCE_API FIRRLevelInstanceMaterialParams();
};

