#pragma once
#include "CoreMinimal.h"
#include "ELiveLinkCompressionBias.h"
#include "ELiveLinkCompressionMethod.h"
#include "ELiveLinkPayloadSerializationMethod.h"
#include "LiveLinkByteArray.h"
#include "LiveLinkSerializedFrameData.generated.h"

USTRUCT(BlueprintType)
struct FLiveLinkSerializedFrameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PayloadTypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkPayloadSerializationMethod SerializationMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkCompressionMethod CompressionMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELiveLinkCompressionBias CompressionBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PayloadSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkByteArray PayloadBytes;
    
    LIVELINKMESSAGEBUSFRAMEWORK_API FLiveLinkSerializedFrameData();
};

