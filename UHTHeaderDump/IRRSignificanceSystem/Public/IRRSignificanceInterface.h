#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "IRRSignificanceInterface.generated.h"

UINTERFACE(Blueprintable)
class UIRRSignificanceInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRSignificanceInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateSignificance(float Distance, bool bWasRenderedRecently);
    
};

