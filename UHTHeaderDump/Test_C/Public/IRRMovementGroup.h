#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PatrolActionSystem -ObjectName=UPSMovementGroup -FallbackName=UPSMovementGroup
#include "IRRFormationConfig.h"
#include "IRRFormationShape.h"
#include "IRRMovementGroup.generated.h"

class AActor;
class ACharacter;
class AIRRMovementGroup;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AIRRMovementGroup : public AUPSMovementGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseElementMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRFormationShape FormationShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRFormationConfig FormationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawFormationDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* RouteLeader;
    
    AIRRMovementGroup(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRouteLeader(AActor* NewRouteLeader);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRouteLeader() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAssignedSlot(const ACharacter* Member) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AIRRMovementGroup* FindGroupFor(const ACharacter* Character);
    
    UFUNCTION(BlueprintCallable)
    void ClearMemberSlot(ACharacter* Member);
    
    UFUNCTION(BlueprintCallable)
    void AssignMemberSlot(ACharacter* Member, int32 SlotIndex);
    
};

