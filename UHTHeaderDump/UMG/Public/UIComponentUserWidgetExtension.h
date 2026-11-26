#pragma once
#include "CoreMinimal.h"
#include "UserWidgetExtension.h"
#include "UIComponentUserWidgetExtension.generated.h"

class UUIComponentContainer;

UCLASS(Blueprintable, MinimalAPI)
class UUIComponentUserWidgetExtension : public UUserWidgetExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UUIComponentContainer* ComponentContainer;
    
public:
    UUIComponentUserWidgetExtension();

};

