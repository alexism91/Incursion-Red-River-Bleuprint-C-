#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=IRRCoreUI -ObjectName=IRRUserWidget -FallbackName=IRRUserWidget
#include "IRRRangefinderReading.h"
#include "IRROpticDisplayWidget.generated.h"

class AActor;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class TEST_C_API UIRROpticDisplayWidget : public UIRRUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ReadoutDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* RangeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* HorizontalText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InclinationText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ModeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OpticActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRRangefinderReading Reading;
    
public:
    UIRROpticDisplayWidget();

    UFUNCTION(BlueprintCallable)
    void SetRangefinderReading(const FIRRRangefinderReading& InReading);
    
    UFUNCTION(BlueprintCallable)
    void SetOpticActor(AActor* InOpticActor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRRangefinderReading GetRangefinderReading() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FText FormatRangeText(float Value, bool bHasReturn, int32 DashCount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ApplyReading(const FIRRRangefinderReading& InReading, AActor* InOpticActor);
    
};

