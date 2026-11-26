#pragma once
#include "CoreMinimal.h"
#include "MetaSoundBuilderBase.h"
#include "MetaSoundPatchBuilder.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMetaSoundPatchBuilder : public UMetaSoundBuilderBase {
    GENERATED_BODY()
public:
    UMetaSoundPatchBuilder();

};

