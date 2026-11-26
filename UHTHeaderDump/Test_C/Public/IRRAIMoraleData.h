#pragma once
#include "CoreMinimal.h"
#include "EIRRAIMoralePanicState.h"
#include "IRRAIMoraleData.generated.h"

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIMoraleData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DynamicMorale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseMorale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRAIMoralePanicState PanicState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimePanicStateStarted;
    
    FIRRAIMoraleData();
};

