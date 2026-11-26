#pragma once
#include "CoreMinimal.h"
#include "EditorDataStorageFactory.h"
#include "Test_PingPongBetweenPhaseFactory.generated.h"

UCLASS(Blueprintable)
class UTest_PingPongBetweenPhaseFactory : public UEditorDataStorageFactory {
    GENERATED_BODY()
public:
    UTest_PingPongBetweenPhaseFactory();

};

