#pragma once
#include "CoreMinimal.h"
#include "IRRAIGroupAsyncPathRequest.generated.h"

class UIRRAIGroupComponent;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIGroupAsyncPathRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIGroupComponent* RequestingMember;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIGroupComponent* TargetMember;
    
    FIRRAIGroupAsyncPathRequest();
};

