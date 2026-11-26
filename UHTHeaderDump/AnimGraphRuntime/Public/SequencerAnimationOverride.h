#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "SequencerAnimationOverride.generated.h"

UINTERFACE(Blueprintable, MinimalAPI)
class USequencerAnimationOverride : public UInterface {
    GENERATED_BODY()
};

class ISequencerAnimationOverride : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FName> GetSequencerAnimSlotNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AllowsCinematicOverride() const;
    
};

