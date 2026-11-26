#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SlateRHIPostBufferProcessor.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, MinimalAPI)
class USlateRHIPostBufferProcessor : public UObject {
    GENERATED_BODY()
public:
    USlateRHIPostBufferProcessor();

};

