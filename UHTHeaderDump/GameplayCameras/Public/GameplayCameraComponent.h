#pragma once
#include "CoreMinimal.h"
#include "CameraAssetReference.h"
#include "GameplayCameraComponentBase.h"
#include "GameplayCameraComponent.generated.h"

class UCameraAsset;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UGameplayCameraComponent : public UGameplayCameraComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraAssetReference CameraReference;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraAsset* Camera;
    
public:
    UGameplayCameraComponent(const FObjectInitializer& ObjectInitializer);

};

