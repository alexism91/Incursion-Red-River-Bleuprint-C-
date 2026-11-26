#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRAISubManagerBase -FallbackName=IRRAISubManagerBase
#include "IRRAIOptimizationSubManager.generated.h"

class UAIOptimizationComponentV2;

UCLASS(Blueprintable)
class TEST_C_API UIRRAIOptimizationSubManager : public UIRRAISubManagerBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIOptimizationComponentV2*> Components;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIOptimizationComponentV2*> PlayerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIOptimizationComponentV2*> BotComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIOptimizationComponentV2*> UnpossessedPlayerComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAIOptimizationComponentV2*> UnpossessedBotComponents;
    
public:
    UIRRAIOptimizationSubManager();

};

