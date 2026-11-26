#pragma once
#include "CoreMinimal.h"
#include "WidgetSegmentValueOverride.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FWidgetSegmentValueOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EnumIndexToOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayNameOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* DisplayIcon;
    
    NIAGARA_API FWidgetSegmentValueOverride();
};

