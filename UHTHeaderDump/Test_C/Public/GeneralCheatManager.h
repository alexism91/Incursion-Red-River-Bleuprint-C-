#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "GeneralCheatManager.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UGeneralCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UGeneralCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void IRRStatus(FName StatusName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IRRListStatus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void IRRHeal(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IRRDamage(float Amount, FName BodyPart);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IRRClearStatus(FName StatusName);
    
};

