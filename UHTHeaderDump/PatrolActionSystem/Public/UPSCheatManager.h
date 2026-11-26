#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CheatManager -FallbackName=CheatManager
#include "UPSCheatManager.generated.h"

UCLASS(Blueprintable)
class PATROLACTIONSYSTEM_API UUPSCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UUPSCheatManager();

    UFUNCTION(BlueprintCallable, Exec)
    void UPS_EnablePointActionsDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UPS_EnablePatrolVisualization();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UPS_EnableGroupMovementDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UPS_DisablePointActionsDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UPS_DisablePatrolVisualization();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UPS_DisableGroupMovementDebug();
    
};

