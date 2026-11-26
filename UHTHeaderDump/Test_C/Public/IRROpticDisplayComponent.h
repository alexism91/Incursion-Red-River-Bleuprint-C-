#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Templates/SubclassOf.h"
#include "IRROpticDisplayComponent.generated.h"

class UIRROpticDisplayWidget;
class UTextureRenderTarget2D;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRROpticDisplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* DisplayTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIRROpticDisplayWidget> DisplayWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRedrawInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRedrawEveryTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTextureWaitTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIRROpticDisplayWidget* DisplayWidget;
    
public:
    UIRROpticDisplayComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ShowDisplay();
    
    UFUNCTION(BlueprintCallable)
    void MarkDisplayDirty();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisplayVisible() const;
    
    UFUNCTION(BlueprintCallable)
    void HideDisplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRROpticDisplayWidget* GetDisplayWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTextureRenderTarget2D* GetDisplayTarget() const;
    
};

