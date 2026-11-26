#pragma once
#include "CoreMinimal.h"
#include "PlayerKeyMapping.h"
#include "KeyMappingRow.generated.h"

USTRUCT(BlueprintType)
struct FKeyMappingRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FPlayerKeyMapping> Mappings;
    
    ENHANCEDINPUT_API FKeyMappingRow();
};

