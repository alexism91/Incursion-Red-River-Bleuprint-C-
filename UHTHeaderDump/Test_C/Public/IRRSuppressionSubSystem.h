#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRAdvancedAI -ObjectName=IRRTickableWorldSubSystem -FallbackName=IRRTickableWorldSubSystem
#include "IRRFlyByData.h"
#include "IRRSuppressionSubSystem.generated.h"

class UIRRCharacterManager;
class UIRRSuppressionReceiver;

UCLASS(Blueprintable)
class TEST_C_API UIRRSuppressionSubSystem : public UIRRTickableWorldSubSystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIRRFlyByData> TrackedBullets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRSuppressionReceiver*> SuppressionReceivers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRCharacterManager* CharacterManager;
    
public:
    UIRRSuppressionSubSystem();

};

