#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "ValueOrBBKey_Class.h"
#include "BTTask_SetKeyValueClass.generated.h"

UCLASS(Blueprintable)
class UBTTask_SetKeyValueClass : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* BaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Class Value;
    
public:
    UBTTask_SetKeyValueClass();

};

