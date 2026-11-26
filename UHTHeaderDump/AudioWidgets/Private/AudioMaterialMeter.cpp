#include "AudioMaterialMeter.h"

UAudioMaterialMeter::UAudioMaterialMeter() {
    this->Orientation = Orient_Vertical;
    this->MeterChannelInfo.AddDefaulted(1);
}

void UAudioMaterialMeter::SetMeterChannelInfo(const TArray<FMeterChannelInfo>& InMeterChannelInfo) {
}

TArray<FMeterChannelInfo> UAudioMaterialMeter::GetMeterChannelInfo() const {
    return TArray<FMeterChannelInfo>();
}


