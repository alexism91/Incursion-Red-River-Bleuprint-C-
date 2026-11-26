#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "EMovementStance.h"
#include "MovementGaitItem.h"
#include "MovementStanceItem.generated.h"

USTRUCT(BlueprintType)
struct FMovementStanceItem : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovementStance Stance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovementGaitItem> Settings;
    
    TEST_C_API FMovementStanceItem();
};

