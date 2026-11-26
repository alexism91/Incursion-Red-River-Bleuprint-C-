#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerCameraManager -FallbackName=PlayerCameraManager
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PostProcessSettings -FallbackName=PostProcessSettings
#include "IRRPlayerCameraManager.generated.h"

class IBlendableInterface;
class UBlendableInterface;

UCLASS(Blueprintable, NoExport, NonTransient)
class TEST_C_API AIRRPlayerCameraManager : public APlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPostProcessSettings PPSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PPWeight;
    
    AIRRPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RemoveBlendable(const TScriptInterface<IBlendableInterface> InBlendableObject, float BlendTime);
    
    UFUNCTION(BlueprintCallable)
    void AddBlendable(const TScriptInterface<IBlendableInterface> InBlendableObject, float InWeight, float BlendTime);
    
};

