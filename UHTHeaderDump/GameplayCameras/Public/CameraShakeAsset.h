#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "BaseCameraObject.h"
#include "ECameraBuildStatus.h"
#include "HasCameraBuildStatus.h"
#include "ObjectTreeGraphObject.h"
#include "ObjectTreeGraphRootObject.h"
#include "CameraShakeAsset.generated.h"

class UShakeCameraNode;
class USimpleFixedTimeBlendCameraNode;

UCLASS(Blueprintable, MinimalAPI)
class UCameraShakeAsset : public UBaseCameraObject, public IHasCameraBuildStatus, public IObjectTreeGraphObject, public IObjectTreeGraphRootObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UShakeCameraNode* RootNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleFixedTimeBlendCameraNode* BlendIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USimpleFixedTimeBlendCameraNode* BlendOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSingleInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECameraBuildStatus BuildStatus;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    UCameraShakeAsset();


    // Fix for true pure virtual functions not being implemented
};

