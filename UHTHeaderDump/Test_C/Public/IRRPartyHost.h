#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Kronos -ObjectName=KronosPartyHost -FallbackName=KronosPartyHost
#include "IRRPartyHost.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class TEST_C_API AIRRPartyHost : public AKronosPartyHost {
    GENERATED_BODY()
public:
    AIRRPartyHost(const FObjectInitializer& ObjectInitializer);

};

