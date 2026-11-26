#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CameraAssetAllocationInfo.h"
#include "CameraObjectInterfaceParameterDefinition.h"
#include "ECameraBuildStatus.h"
#include "HasCameraBuildStatus.h"
#include "ObjectTreeGraphObject.h"
#include "ObjectTreeGraphRootObject.h"
#include "CameraAsset.generated.h"

class UCameraDirector;
class UCameraRigAsset;
class UCameraRigTransition;

UCLASS(Blueprintable, MinimalAPI)
class UCameraAsset : public UObject, public IHasCameraBuildStatus, public IObjectTreeGraphObject, public IObjectTreeGraphRootObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCameraDirector* CameraDirector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraRigTransition*> EnterTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCameraRigTransition*> ExitTransitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECameraBuildStatus BuildStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag DefaultParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraObjectInterfaceParameterDefinition> ParameterDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraRigAsset*> ParameterOwners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraAssetAllocationInfo AllocationInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCameraRigAsset*> CameraRigs;
    
public:
    UCameraAsset();


    // Fix for true pure virtual functions not being implemented
};

