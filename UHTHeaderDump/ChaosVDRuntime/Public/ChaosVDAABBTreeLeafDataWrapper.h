#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "ChaosVDAABBTreePayloadBoundsElement.h"
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDAABBTreeLeafDataWrapper.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDAABBTreeLeafDataWrapper : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FChaosVDAABBTreePayloadBoundsElement> Elements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox Bounds;
    
    CHAOSVDRUNTIME_API FChaosVDAABBTreeLeafDataWrapper();
};

