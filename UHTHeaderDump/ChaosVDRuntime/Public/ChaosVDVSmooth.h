#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "ChaosVDWrapperDataBase.h"
#include "ChaosVDVSmooth.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDVSmooth : public FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector MW;
    
    CHAOSVDRUNTIME_API FChaosVDVSmooth();
};

