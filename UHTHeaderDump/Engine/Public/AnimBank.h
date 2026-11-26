#pragma once
#include "CoreMinimal.h"
#include "AnimationAsset.h"
#include "Interface_AsyncCompilation.h"
#include "AnimBank.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UAnimBank : public UAnimationAsset, public IInterface_AsyncCompilation {
    GENERATED_BODY()
public:
    UAnimBank();


    // Fix for true pure virtual functions not being implemented
};

