#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Rotator.h"
#include "BTTask_SetKeyValueRotator.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueRotator : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Rotator Value;
    
public:
    UBTTask_SetKeyValueRotator();

};

