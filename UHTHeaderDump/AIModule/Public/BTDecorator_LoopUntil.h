#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "ValueOrBBKey_Enum.h"
#include "BTDecorator_LoopUntil.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UBTDecorator_LoopUntil : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FValueOrBBKey_Enum RequiredResult;
    
public:
    UBTDecorator_LoopUntil();

};

