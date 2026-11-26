#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "IRRTabDescriptor.h"
#include "IRRTabButtonInterface.generated.h"

UINTERFACE(Blueprintable)
class UIRRTabButtonInterface : public UInterface {
    GENERATED_BODY()
};

class IIRRTabButtonInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetTabLabelInfo(const FIRRTabDescriptor& TabDescriptor);
    
};

