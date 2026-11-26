#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=EOrientation -FallbackName=EOrientation
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "AudioMaterialMeterStyle.h"
#include "MeterChannelInfo.h"
#include "AudioMaterialMeter.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAudioMaterialMeter : public UWidget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE_RetVal(TArray<FMeterChannelInfo>, FGetMeterChannelInfo);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAudioMaterialMeterStyle WidgetStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EOrientation> Orientation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGetMeterChannelInfo MeterChannelInfoDelegate;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeterChannelInfo> MeterChannelInfo;
    
public:
    UAudioMaterialMeter();

    UFUNCTION(BlueprintCallable)
    void SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMeterChannelInfo> GetMeterChannelInfo() const;
    
};

