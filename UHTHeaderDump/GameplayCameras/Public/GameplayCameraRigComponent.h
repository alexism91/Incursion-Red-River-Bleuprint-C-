#pragma once
#include "CoreMinimal.h"
#include "CameraRigAssetReference.h"
#include "GameplayCameraComponentBase.h"
#include "GameplayCameraRigComponent.generated.h"

class UCameraAsset;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameplayCameraRigComponent : public UGameplayCameraComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRigAssetReference CameraRigReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAsset* GeneratedCameraAsset;
    
public:
    UGameplayCameraRigComponent(const FObjectInitializer& ObjectInitializer);

};

