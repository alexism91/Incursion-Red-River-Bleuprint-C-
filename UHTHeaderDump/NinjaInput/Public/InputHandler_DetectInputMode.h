#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "NinjaInputHandler.h"
#include "InputHandler_DetectInputMode.generated.h"

class UInputAction;

UCLASS(Blueprintable, EditInlineNew)
class NINJAINPUT_API UInputHandler_DetectInputMode : public UNinjaInputHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UInputAction*, FGameplayTag> InputModeMappings;
    
public:
    UInputHandler_DetectInputMode();

};

