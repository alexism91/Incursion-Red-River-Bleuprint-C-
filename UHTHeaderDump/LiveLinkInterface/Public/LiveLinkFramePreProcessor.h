#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LiveLinkFramePreProcessor.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class ULiveLinkFramePreProcessor : public UObject {
    GENERATED_BODY()
public:
    ULiveLinkFramePreProcessor();

};

