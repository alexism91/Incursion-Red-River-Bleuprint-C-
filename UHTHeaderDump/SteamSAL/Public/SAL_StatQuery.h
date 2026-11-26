#pragma once
#include "CoreMinimal.h"
#include "ESALStatReadType.h"
#include "SAL_StatQuery.generated.h"

USTRUCT(BlueprintType)
struct FSAL_StatQuery {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString APIStatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESALStatReadType StatType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FriendlyStatName;
    
    STEAMSAL_API FSAL_StatQuery();
};

