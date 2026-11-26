#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraRigProxyRedirectTable.h"
#include "CameraDirector.generated.h"

class UCameraRigProxyTable;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, MinimalAPI)
class UCameraDirector : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRigProxyRedirectTable CameraRigProxyRedirectTable;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigProxyTable* CameraRigProxyTable;
    
public:
    UCameraDirector();

};

