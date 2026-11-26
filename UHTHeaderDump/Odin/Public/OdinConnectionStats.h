#pragma once
#include "CoreMinimal.h"
#include "OdinConnectionStats.generated.h"

USTRUCT(BlueprintType)
struct ODIN_API FOdinConnectionStats {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UdpTxDatagrams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UdpTxBytes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UdpRxDatagrams;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UdpRxBytes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rtt;
    
    FOdinConnectionStats();
};

