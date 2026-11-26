#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "IRRDoorCodeEntry.h"
#include "IRRDoorCodeSubsystem.generated.h"

UCLASS(Blueprintable)
class IRRMISSIONSYSTEM_API UIRRDoorCodeSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIRRDoorCodeSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRDoorCodeEntry> GetDoorCodes(const FGameplayTagContainer& Groups, bool bOnlyLocked) const;
    
};

