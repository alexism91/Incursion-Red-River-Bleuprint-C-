#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=FieldNotification -ObjectName=NotifyFieldValueChanged -FallbackName=NotifyFieldValueChanged
#include "UIComponent.generated.h"

class UWidget;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UUIComponent : public UObject, public INotifyFieldValueChanged {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> Owner;
    
public:
    UUIComponent();


    // Fix for true pure virtual functions not being implemented
};

