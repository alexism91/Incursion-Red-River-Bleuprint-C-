#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_String.h"
#include "BTTask_SetKeyValueString.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueString : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_String Value;
    
public:
    UBTTask_SetKeyValueString();

};

