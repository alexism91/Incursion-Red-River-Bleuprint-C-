#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRCharacterManager.generated.h"

class AIRRBaseCharacter;

UCLASS(Blueprintable)
class TEST_C_API UIRRCharacterManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRBaseCharacter*> AllCharacters;
    
public:
    UIRRCharacterManager();

};

