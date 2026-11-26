#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Object.h"
#include "BTTask_SetKeyValueObject.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueObject : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Object Value;
    
public:
    UBTTask_SetKeyValueObject();

};

