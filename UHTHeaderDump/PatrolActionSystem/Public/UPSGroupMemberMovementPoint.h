#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "UPSGroupMemberMovementPoint.generated.h"

class UBillboardComponent;

UCLASS(Blueprintable, NoExport)
class PATROLACTIONSYSTEM_API AUPSGroupMemberMovementPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBillboardComponent* BillboardComponent;
    
public:
    AUPSGroupMemberMovementPoint(const FObjectInitializer& ObjectInitializer);

};

