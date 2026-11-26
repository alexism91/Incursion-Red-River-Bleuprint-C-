#pragma once
#include "CoreMinimal.h"
#include "RigInfluenceMap.h"
#include "RigInfluenceMapPerEvent.generated.h"

USTRUCT(BlueprintType)
struct FRigInfluenceMapPerEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigInfluenceMap> Maps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int32> EventToIndex;
    
public:
    CONTROLRIG_API FRigInfluenceMapPerEvent();
};

