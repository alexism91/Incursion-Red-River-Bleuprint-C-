#pragma once
#include "CoreMinimal.h"
#include "CameraRigProxyRedirectTableEntry.h"
#include "CameraRigProxyRedirectTable.generated.h"

USTRUCT(BlueprintType)
struct FCameraRigProxyRedirectTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraRigProxyRedirectTableEntry> Entries;
    
    GAMEPLAYCAMERAS_API FCameraRigProxyRedirectTable();
};

