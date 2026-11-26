#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "WidgetAnimationHandle.h"
#include "UserWidgetFunctionLibrary.generated.h"

class UUMGSequencePlayer;

UCLASS(Blueprintable)
class UUserWidgetFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UUserWidgetFunctionLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UUMGSequencePlayer* Conv_UMGSequencePlayer(const FWidgetAnimationHandle& WidgetAnimationHandle);
    
};

