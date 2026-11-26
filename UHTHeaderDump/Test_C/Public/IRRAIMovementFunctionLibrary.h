#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "IRRAIMovementFunctionLibrary.generated.h"

class APawn;

UCLASS(Blueprintable)
class TEST_C_API UIRRAIMovementFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIRRAIMovementFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static bool SetWalk(const APawn* Pawn, bool bWalk);
    
    UFUNCTION(BlueprintCallable)
    static bool SetTacticalSprint(const APawn* Pawn, bool bSprint);
    
    UFUNCTION(BlueprintCallable)
    static bool SetRun(const APawn* Pawn, bool bRun);
    
    UFUNCTION(BlueprintCallable)
    static bool SetCrouch(const APawn* Pawn, bool bCrouch);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetWantsToSprintOrRun(const APawn* Pawn);
    
};

