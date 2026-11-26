#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraRigProxyRedirectTableEntry.h"
#include "CameraRigProxyTable.generated.h"

UCLASS(Blueprintable)
class UCameraRigProxyTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraRigProxyRedirectTableEntry> Entries;
    
    UCameraRigProxyTable();

};

