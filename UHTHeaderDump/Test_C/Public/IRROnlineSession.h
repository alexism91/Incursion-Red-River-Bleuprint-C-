#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Kronos -ObjectName=KronosOnlineSession -FallbackName=KronosOnlineSession
#include "IRROnlineSession.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UIRROnlineSession : public UKronosOnlineSession {
    GENERATED_BODY()
public:
    UIRROnlineSession();

};

