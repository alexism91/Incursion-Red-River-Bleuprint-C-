#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "EIRRObjectiveWorldState.h"
#include "IRRMarkerWidget.h"
#include "IRRMissionMarkerPresentation.h"
#include "IRRObjectiveMarkerWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IRRMISSIONSYSTEM_API UIRRObjectiveMarkerWidget : public UIRRMarkerWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PresentationRefreshInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIRRObjectiveWorldState CachedDisplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCachedVisible;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle PresentationRefreshTimer;
    
public:
    UIRRObjectiveMarkerWidget();

    UFUNCTION(BlueprintCallable)
    void RefreshObjectiveMarkerPresentation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyObjectiveMarkerPresentation(const FIRRMissionMarkerPresentation& Presentation);
    
};

