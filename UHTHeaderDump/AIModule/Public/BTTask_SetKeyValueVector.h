#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Vector.h"
#include "BTTask_SetKeyValueVector.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueVector : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Vector Value;
    
public:
    UBTTask_SetKeyValueVector();

};

