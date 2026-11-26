#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRREnhancedObjects -ObjectName=IRRBaseObject -FallbackName=IRRBaseObject
#include "IRRSpawnPayload.generated.h"

class AActor;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRSpawnPayload : public UIRRBaseObject {
    GENERATED_BODY()
public:
    UIRRSpawnPayload();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteSpawnPayload(AActor* SpawnedActor);
    
};

