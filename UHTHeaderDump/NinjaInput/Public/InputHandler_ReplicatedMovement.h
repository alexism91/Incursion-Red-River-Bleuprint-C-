#pragma once
#include "CoreMinimal.h"
#include "InputHandler_Move.h"
#include "InputHandler_ReplicatedMovement.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_ReplicatedMovement : public UInputHandler_Move {
    GENERATED_BODY()
public:
    UInputHandler_ReplicatedMovement();

};

