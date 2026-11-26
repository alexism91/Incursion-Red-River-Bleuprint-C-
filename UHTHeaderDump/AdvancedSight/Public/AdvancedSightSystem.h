#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=ETeamAttitude -FallbackName=ETeamAttitude
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "AdvancedSightSystem.generated.h"

class UFont;

UCLASS(Blueprintable)
class ADVANCEDSIGHT_API UAdvancedSightSystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFont* DebugHUDFont;
    
public:
    UAdvancedSightSystem();

    UFUNCTION(BlueprintCallable)
    void UpdateTeamsRelationship(int32 TeamA, int32 TeamB, TEnumAsByte<ETeamAttitude::Type> NewAttitude);
    
};

