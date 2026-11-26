#include "OdinNativeEncoderCreateEx.h"

UOdinNativeEncoderCreateEx::UOdinNativeEncoderCreateEx() {
    this->PeerId = 0;
    this->SampleRate = 0;
    this->Stereo = false;
    this->ApplicationVoip = false;
    this->BitrateKbps = 0;
    this->PacketLossPerc = 0;
    this->UpdatePositionInterval = 0;
}

UOdinNativeEncoderCreateEx* UOdinNativeEncoderCreateEx::EncoderCreateEx(UObject* WorldContextObject, UOdinEncoder*& encoder, int64 peer_id, int32 sample_rate, const bool NewStereo, const bool application_voip, int32 bitrate_kbps, int32 Packet_Loss_Perc, int64 Update_Position_Interval_MS, const FOdinNativeEncoderCreateExError& onError, const FOdinNativeEncoderCreateExSuccess& OnSuccess) {
    return NULL;
}


