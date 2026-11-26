#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "IRRVendorCondition.generated.h"

class ACharacter;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UIRRVendorCondition : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ACharacter* Player;
    
    UIRRVendorCondition();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, meta=(WorldContext="WorldContextObject"))
    bool K2_Evaluate(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    bool Evaluate(const UObject* WorldContextObject);
    
};

