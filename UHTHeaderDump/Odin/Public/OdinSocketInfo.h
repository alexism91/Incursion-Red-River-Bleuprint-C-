#pragma once
#include "CoreMinimal.h"
#include "EOdinSocketKind.h"
#include "OdinSocketInfo.generated.h"

class UOdinRoom;

USTRUCT(BlueprintType)
struct ODIN_API FOdinSocketInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UOdinRoom> room;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOdinSocketKind Kind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsInbound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 RemotePeerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Label;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 UnsentBytes;
    
    FOdinSocketInfo();
};

