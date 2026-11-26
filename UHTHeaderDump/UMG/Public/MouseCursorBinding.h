#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=EMouseCursor -FallbackName=EMouseCursor
#include "PropertyBinding.h"
#include "MouseCursorBinding.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMouseCursorBinding : public UPropertyBinding {
    GENERATED_BODY()
public:
    UMouseCursorBinding();

    UFUNCTION(BlueprintCallable)
    TEnumAsByte<EMouseCursor::Type> GetValue() const;
    
};

