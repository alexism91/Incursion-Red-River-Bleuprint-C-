#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=NavAreaLocalGrid -FallbackName=NavAreaLocalGrid
#include "IRRAISearchArea.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAISearchArea {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAreaLocalGrid LocalGrid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeCleared;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpandedPathingRadius;
    
    FIRRAISearchArea();
};

