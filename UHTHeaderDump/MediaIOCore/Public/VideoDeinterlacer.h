#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "VideoDeinterlacer.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MEDIAIOCORE_API UVideoDeinterlacer : public UObject {
    GENERATED_BODY()
public:
    UVideoDeinterlacer();

};

