#pragma once
#include "CoreMinimal.h"
#include "ENavigationToolItemFlags.h"
#include "NavigationToolViewColumnSaveState.h"
#include "NavigationToolViewSaveState.generated.h"

USTRUCT(BlueprintType)
struct FNavigationToolViewSaveState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, ENavigationToolItemFlags> ViewItemFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FNavigationToolViewColumnSaveState> ColumnsState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ActiveItemFilters;
    
    MOVIESCENE_API FNavigationToolViewSaveState();
};

