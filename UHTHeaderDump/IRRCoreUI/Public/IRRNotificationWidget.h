#pragma once
#include "CoreMinimal.h"
#include "EIRRNotificationType.h"
#include "IRRUserWidget.h"
#include "IRRNotificationWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRCOREUI_API UIRRNotificationWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NotificationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRNotificationType NotificationType;
    
    UIRRNotificationWidget();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateNotification(const FText& NewText, EIRRNotificationType NewType);
    
};

