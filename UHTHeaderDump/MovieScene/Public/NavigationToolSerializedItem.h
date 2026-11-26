#pragma once
#include "CoreMinimal.h"
#include "NavigationToolSerializedItem.generated.h"

USTRUCT(BlueprintType)
struct FNavigationToolSerializedItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ID;
    
public:
    MOVIESCENE_API FNavigationToolSerializedItem();
};
FORCEINLINE uint32 GetTypeHash(const FNavigationToolSerializedItem) { return 0; }

