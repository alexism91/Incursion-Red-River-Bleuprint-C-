#pragma once
#include "CoreMinimal.h"
#include "IRRBaseObject.h"
#include "IRRReplicatedObject.generated.h"

UCLASS(Abstract, Blueprintable)
class IRRENHANCEDOBJECTS_API UIRRReplicatedObject : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UIRRReplicatedObject();

};

