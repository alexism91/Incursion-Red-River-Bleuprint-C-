#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UPSEnemyActionScript.generated.h"

class ACharacter;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class PATROLACTIONSYSTEM_API UUPSEnemyActionScript : public UObject {
    GENERATED_BODY()
public:
    UUPSEnemyActionScript();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActionStarted(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActionFinished(ACharacter* Character);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnActionAborted(ACharacter* Character);
    
};

