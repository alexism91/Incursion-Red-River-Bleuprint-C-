#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingDynamic.h"
#include "LevelStreamingLevelInstanceEditorPropertyOverride.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, Transient)
class ULevelStreamingLevelInstanceEditorPropertyOverride : public ULevelStreamingDynamic {
    GENERATED_BODY()
public:
    ULevelStreamingLevelInstanceEditorPropertyOverride();

};

