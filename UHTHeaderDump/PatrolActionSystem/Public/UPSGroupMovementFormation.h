#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UPSGroupMovementFormation.generated.h"

class ACharacter;
class UArrowComponent;

UCLASS(Abstract, Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSGroupMovementFormation : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* RootArrowComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<ACharacter*> CharactersInFormation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* LeaderCharacter;
    
public:
    AUPSGroupMovementFormation(const FObjectInitializer& ObjectInitializer);

};

