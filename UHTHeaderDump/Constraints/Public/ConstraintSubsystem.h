#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EngineSubsystem -FallbackName=EngineSubsystem
#include "ConstraintsInWorld.h"
#include "ConstraintSubsystem.generated.h"

class UConstraintSubsystem;
class UTickableConstraint;

UCLASS(Blueprintable)
class UConstraintSubsystem : public UEngineSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FOnConstraintRemovedFromSystemConstraintSubsystem, EnterPropertyName, UConstraintSubsystem*, Mananger, UTickableConstraint*, Constraint, bool, bDoNotCompensate);
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FOnConstraintAddedToSystemConstraintSubsystem, EnterPropertyName, UConstraintSubsystem*, Mananger, UTickableConstraint*, Constraint);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstraintAddedToSystem OnConstraintAddedToSystem_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstraintRemovedFromSystem OnConstraintRemovedFromSystem_BP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FConstraintsInWorld> ConstraintsInWorld;
    
public:
    UConstraintSubsystem();

};

