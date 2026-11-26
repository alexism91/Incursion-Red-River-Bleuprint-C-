#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLink -ObjectName=LiveLinkCustomTimeStep -FallbackName=LiveLinkCustomTimeStep
#include "LiveLinkHubCustomTimeStep.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class ULiveLinkHubCustomTimeStep : public ULiveLinkCustomTimeStep {
    GENERATED_BODY()
public:
    ULiveLinkHubCustomTimeStep();

};

