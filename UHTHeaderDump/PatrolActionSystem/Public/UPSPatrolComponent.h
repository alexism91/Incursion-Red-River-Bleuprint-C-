#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "EPatrolMovementType.h"
#include "UPSPatrolComponent.generated.h"

class AUPSPatrolPoint;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PATROLACTIONSYSTEM_API UUPSPatrolComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUPSPatrolPoint* InitialMovementPatrolPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPatrolMovementType PatrolMovementDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableVisualization;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceToInitialPatrolPoint;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUPSPatrolPoint* CurrentPatrolPoint;
    
public:
    UUPSPatrolComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateMovementPatrolPoint(AUPSPatrolPoint* PatrolPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetPatrolMovementType(EPatrolMovementType MovementType);
    
    UFUNCTION(BlueprintCallable)
    void InitializeInitialPatrolPoint();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AUPSPatrolPoint* GetCurrentPatrolPoint() const;
    
};

