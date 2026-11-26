#pragma once
#include "CoreMinimal.h"
#include "IRROpticDisplayComponent.h"
#include "IRRRangefinderReading.h"
#include "OnRangefinderReadingChangedDelegate.h"
#include "IRRRangefinderDisplayComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRRangefinderDisplayComponent : public UIRROpticDisplayComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRangefinderReadingChanged OnRangefinderReadingChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SampleInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHoldLastReading;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DesignatorTag;
    
public:
    UIRRRangefinderDisplayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRRangefinderReading GetReading() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearReading();
    
};

