#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "MovementGroupMemberInfo.generated.h"

class AUPSGroupMemberMovementPoint;

USTRUCT(BlueprintType)
struct PATROLACTIONSYSTEM_API FMovementGroupMemberInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AUPSGroupMemberMovementPoint* GroupMemberMovementPointActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector GroupMemberLocation;
    
    FMovementGroupMemberInfo();
};

