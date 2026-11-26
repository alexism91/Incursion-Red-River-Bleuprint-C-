#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "ContainerItem.h"
#include "ItemSnapActor.h"
#include "MainContainer.h"
#include "PickUpContainerItem.h"
#include "ItemInspectActor.generated.h"

UCLASS(Blueprintable, NoExport)
class TEST_C_API AItemInspectActor : public AItemSnapActor {
    GENERATED_BODY()
public:
    AItemInspectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateZoom(bool bZoomIn);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateRotation(FVector2D Rotation);
    
    UFUNCTION(BlueprintCallable)
    void OnItemUpdated(FPickUpContainerItem PickUpContainerItem);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachmentRemoved(FMainContainer MainContainer, FContainerItem Attachment);
    
    UFUNCTION(BlueprintCallable)
    void OnAttachmentAdded(FMainContainer MainContainer, FContainerItem Attachment);
    
};

