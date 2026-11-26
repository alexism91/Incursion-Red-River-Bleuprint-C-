#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "LPSPCrosshair.generated.h"

class ALPSPCharacter;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class LOWPOLYSHOOTERPACK_API ULPSPCrosshair : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ALPSPCharacter> Character;
    
public:
    ULPSPCrosshair();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESlateVisibility GetSlateVisibility();
    
};

