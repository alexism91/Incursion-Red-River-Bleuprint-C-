#pragma once
#include "CoreMinimal.h"
#include "DrawerItemInfo.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FDrawerItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* World;
    
    FDrawerItemInfo();
};

