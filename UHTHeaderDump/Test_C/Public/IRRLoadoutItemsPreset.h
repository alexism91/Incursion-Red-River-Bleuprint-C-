#pragma once
#include "CoreMinimal.h"
#include "IRRItemsPreset.h"
#include "IRRLoadoutItemsPreset.generated.h"

UCLASS(Blueprintable, Transient)
class TEST_C_API UIRRLoadoutItemsPreset : public UIRRItemsPreset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SourceLoadoutId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SpawnFaction;
    
    UIRRLoadoutItemsPreset();

};

