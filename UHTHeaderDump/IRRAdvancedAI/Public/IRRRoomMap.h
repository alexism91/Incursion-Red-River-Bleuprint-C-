#pragma once
#include "CoreMinimal.h"
#include "IRRTickableWorldSubSystem.h"
#include "IRRRoomMap.generated.h"

class UIRRNavAreaMap;

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRRoomMap : public UIRRTickableWorldSubSystem {
    GENERATED_BODY()
public:
    UIRRRoomMap();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleNavAreaMapUpdated(const UIRRNavAreaMap* NavMap);
    
};

