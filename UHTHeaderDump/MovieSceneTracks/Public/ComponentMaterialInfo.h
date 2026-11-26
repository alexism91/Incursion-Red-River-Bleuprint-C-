#pragma once
#include "CoreMinimal.h"
#include "EComponentMaterialType.h"
#include "ComponentMaterialInfo.generated.h"

USTRUCT(BlueprintType)
struct FComponentMaterialInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComponentMaterialType MaterialType;
    
    MOVIESCENETRACKS_API FComponentMaterialInfo();
};

