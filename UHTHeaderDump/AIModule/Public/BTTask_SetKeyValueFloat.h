#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Float.h"
#include "BTTask_SetKeyValueFloat.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueFloat : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Float Value;
    
public:
    UBTTask_SetKeyValueFloat();

};

