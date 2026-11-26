#pragma once
#include "CoreMinimal.h"
#include "IRRDesignationConfig.h"
#include "IRRFireSupportSalvo.h"
#include "SimpleGameplayAbility_Toggleable.h"
#include "SimpleGameplayAbility_LaserDesignate.generated.h"

class UIRRHandlerVoiceSet;
class ULaserComponent;

UCLASS(Blueprintable)
class TEST_C_API USimpleGameplayAbility_LaserDesignate : public USimpleGameplayAbility_Toggleable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRDesignationConfig DesignationConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRFireSupportSalvo Salvo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRHandlerVoiceSet* HandlerVoice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReportInterval;
    
    USimpleGameplayAbility_LaserDesignate();

private:
    UFUNCTION(BlueprintCallable)
    void PushLaseReport();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULaserComponent* FindDesignator() const;
    
};

