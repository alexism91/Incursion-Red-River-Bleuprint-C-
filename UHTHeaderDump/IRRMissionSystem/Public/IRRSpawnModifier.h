#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "IRRSpawnModifier.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRSpawnModifier : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UIRRSpawnModifier();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool EvaluateModifier(UPARAM(Ref) float& SpawnChance);
    
};

