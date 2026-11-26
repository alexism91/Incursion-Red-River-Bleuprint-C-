#pragma once
#include "CoreMinimal.h"
#include "OptimusAnimAttributeBufferArray.h"
#include "OptimusComputeDataInterface.h"
#include "OptimusAdvancedSkeletonDataInterface.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UOptimusAdvancedSkeletonDataInterface : public UOptimusComputeDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SkinWeightProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableLayeredSkinning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOptimusAnimAttributeBufferArray AttributeBufferArray;
    
    UOptimusAdvancedSkeletonDataInterface();

};

