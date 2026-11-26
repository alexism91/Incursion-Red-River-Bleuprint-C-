#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
#include "FirstPersonCoreSubObject.h"
#include "FirstPersonPostProcessController.generated.h"

class AActor;
class UFirstPersonPostProcessEffectDefinition;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UFirstPersonPostProcessController : public UFirstPersonCoreSubObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFirstPersonPostProcessEffectDefinition*> PostProcessDefinitions;
    
    UFirstPersonPostProcessController();

protected:
    UFUNCTION(BlueprintCallable)
    void HandleOwnerEndPlay(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

