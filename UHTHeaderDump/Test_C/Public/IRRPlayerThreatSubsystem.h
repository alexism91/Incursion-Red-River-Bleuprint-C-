#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRPlayerThreatSubsystem.generated.h"

class AController;

UCLASS(Blueprintable)
class TEST_C_API UIRRPlayerThreatSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRPlayerThreatSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEngagingBotCount(const AController* PlayerController) const;
    
};

