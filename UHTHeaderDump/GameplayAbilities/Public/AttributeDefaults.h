#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AttributeDefaults.generated.h"

class UAttributeSet;
class UDataTable;

USTRUCT(BlueprintType)
struct FAttributeDefaults {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAttributeSet> Attributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* DefaultStartingTable;
    
    GAMEPLAYABILITIES_API FAttributeDefaults();
};

