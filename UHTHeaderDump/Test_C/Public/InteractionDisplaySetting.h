#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "InteractionMarkerDisplaySetting.h"
#include "InteractionDisplaySetting.generated.h"

USTRUCT(BlueprintType)
struct FInteractionDisplaySetting : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInteractionMarkerDisplaySetting MarkerSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InteractionText;
    
    TEST_C_API FInteractionDisplaySetting();
};

