#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UPSActionCondition.generated.h"

class ACharacter;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class PATROLACTIONSYSTEM_API UUPSActionCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInverseCondition;
    
    UUPSActionCondition();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool InternalCheckCondition(ACharacter* Character);
    
};

