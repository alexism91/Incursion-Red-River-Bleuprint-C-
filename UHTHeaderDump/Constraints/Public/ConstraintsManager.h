#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ConstraintsManager.generated.h"

class UConstraintsManager;
class UTickableConstraint;

UCLASS(Blueprintable, MinimalAPI)
class UConstraintsManager : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_ThreeParams(FOnConstraintRemovedConstraintsManager, EnterPropertyName, UConstraintsManager*, Mananger, UTickableConstraint*, Constraint, bool, bDoNotCompensate);
    DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FOnConstraintAddedConstraintsManager, EnterPropertyName, UConstraintsManager*, Mananger, UTickableConstraint*, Constraint);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstraintAdded OnConstraintAdded_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConstraintRemoved OnConstraintRemoved_BP;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTickableConstraint*> Constraints;
    
public:
    UConstraintsManager();

};

