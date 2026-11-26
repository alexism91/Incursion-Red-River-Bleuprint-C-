#pragma once
#include "CoreMinimal.h"
#include "NavigationToolViewColumnSaveState.generated.h"

USTRUCT(BlueprintType)
struct FNavigationToolViewColumnSaveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Size;
    
    MOVIESCENE_API FNavigationToolViewColumnSaveState();
};

