#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "EIRRBodyPart.h"
#include "IRRCharacterDebugSubsystem.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRRCharacterDebugSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIRRCharacterDebugSubsystem();

    UFUNCTION(BlueprintCallable)
    bool TogglePerspective();
    
    UFUNCTION(BlueprintCallable)
    void SetTechnicalInvulnerable(bool bActivate);
    
    UFUNCTION(BlueprintCallable)
    void Heal(float Amount);
    
    UFUNCTION(BlueprintCallable)
    int32 ClearStatus(FName StatusName);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyStatus(FName StatusName);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDamage(float Amount, EIRRBodyPart BodyPart);
    
};

