#pragma once
#include "CoreMinimal.h"
#include "ChaosVDWrapperDataBase.generated.h"

USTRUCT(BlueprintType)
struct FChaosVDWrapperDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasValidData;
    
public:
    CHAOSVDRUNTIME_API FChaosVDWrapperDataBase();
};

