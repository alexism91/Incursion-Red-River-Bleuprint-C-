#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EOdinAudioEvents.h"
#include "EOdinError.h"
#include "OdinChannelMask.h"
#include "OdinPosition.h"
#include "OdinFunctionLibrary.generated.h"

class UAudioGenerator;
class UObject;
class UOdinAudioCapture;
class UOdinDecoder;
class UOdinEncoder;
class UOdinRoom;

UCLASS(Blueprintable)
class ODIN_API UOdinFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UOdinFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void UnlinkEncoderFromRoom(UOdinEncoder* encoder);
    
    UFUNCTION(BlueprintCallable)
    static void SetChannelsEnabled(UPARAM(Ref) FOdinChannelMask& Mask, const TArray<int32>& EnabledChannels);
    
    UFUNCTION(BlueprintCallable)
    static void SetChannelsDisabled(UPARAM(Ref) FOdinChannelMask& Mask, const TArray<int32>& DisabledChannels);
    
    UFUNCTION(BlueprintCallable)
    static void SetChannels(UPARAM(Ref) FOdinChannelMask& Mask, const TMap<int32, bool>& Channels);
    
    UFUNCTION(BlueprintCallable)
    static void SetChannelInMask(UPARAM(Ref) FOdinChannelMask& Mask, int32 ChannelIndex, bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    static void RegisterDecoder(UOdinDecoder* decoder, UOdinRoom* room, int64 PeerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OdinStringToBytes(const FString& Str, TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OdinHexStringToBytes(const FString& Str, TArray<uint8>& Buffer);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString OdinDebugDumpState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OdinBytesToString(const TArray<uint8>& Buffer, FString& Str);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void OdinBytesToHexString(const TArray<uint8>& Buffer, FString& Str);
    
    UFUNCTION(BlueprintCallable)
    static void LinkEncoderToRoom(UOdinEncoder* encoder, UOdinRoom* room);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsChannelEnabledInMask(const FOdinChannelMask& Mask, const int32 ChannelIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<UOdinRoom*> GetRoomsByName(const FString& RoomId);
    
    UFUNCTION(BlueprintPure)
    static TArray<UOdinDecoder*> GetDecodersForPeer(UOdinRoom* room, int64 PeerId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GenerateAccessKey();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString FormatOdinError(EOdinError Code, bool bUETrace);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesAudioEventMatchFilter(EOdinAudioEvents Event, int32 Filter);
    
    UFUNCTION(BlueprintCallable)
    static void DeregisterDecoderFromAllConnections(UOdinDecoder* decoder);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinEncoder* CreateOdinEncoderFromGenerator(UObject* WorldContextObject, UPARAM(Ref) UOdinRoom*& OdinRoom, UPARAM(Ref) UAudioGenerator*& AudioGenerator);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UOdinAudioCapture* CreateOdinAudioCapture(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static FOdinChannelMask CreateFullMask();
    
    UFUNCTION(BlueprintCallable)
    static FOdinChannelMask CreateEmptyMask();
    
    UFUNCTION(BlueprintCallable)
    static FOdinChannelMask CreateChannelMaskFromEnabled(const TArray<int32>& EnabledChannels);
    
    UFUNCTION(BlueprintCallable)
    static FOdinChannelMask CreateChannelMaskFromDisabled(const TArray<int32>& DisabledChannels);
    
    UFUNCTION(BlueprintCallable)
    static FOdinChannelMask CreateChannelMask(const TMap<int32, bool>& Channels, bool bDefaultValue);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FOdinPosition Conv_VectorToOdinPosition(const FVector& InPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector Conv_OdinPositionToVector(FOdinPosition InPosition);
    
};

