#pragma once
#include "CoreMinimal.h"
#include "IRRAIDirectorControllerData.h"
#include "IRRAIDirectorData.generated.h"

USTRUCT(BlueprintType)
struct FIRRAIDirectorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRAIDirectorControllerData> ControllerData;
    
    TEST_C_API FIRRAIDirectorData();
};

