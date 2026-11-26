#pragma once
#include "CoreMinimal.h"
#include "WidgetBlueprintGeneratedClassExtension.h"
#include "UIComponentWidgetBlueprintGeneratedClassExtension.generated.h"

class UUIComponentContainer;

UCLASS(Blueprintable, MinimalAPI)
class UUIComponentWidgetBlueprintGeneratedClassExtension : public UWidgetBlueprintGeneratedClassExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIComponentContainer* ComponentContainer;
    
public:
    UUIComponentWidgetBlueprintGeneratedClassExtension();

};

