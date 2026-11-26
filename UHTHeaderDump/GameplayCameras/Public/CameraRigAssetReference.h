#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "BaseCameraObjectReference.h"
#include "CameraRigParameterOverrides.h"
#include "CameraRigAssetReference.generated.h"

class UCameraRigAsset;

USTRUCT(BlueprintType)
struct FCameraRigAssetReference : public FBaseCameraObjectReference {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCameraRigAsset* CameraRig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGuid> ParameterOverrideGuids;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraRigParameterOverrides ParameterOverrides;
    
public:
    GAMEPLAYCAMERAS_API FCameraRigAssetReference();
};

