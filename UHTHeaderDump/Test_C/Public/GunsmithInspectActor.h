#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GunsmithAttachmentSlot.h"
#include "GunsmithSlotLayoutSettings.h"
#include "ItemInspectActor.h"
#include "GunsmithInspectActor.generated.h"

class USceneComponent;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AGunsmithInspectActor : public AItemInspectActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PivotComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGunsmithSlotLayoutSettings SlotLayout;
    
    AGunsmithInspectActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<FGunsmithAttachmentSlot> LayoutAttachmentSlots();
    
    UFUNCTION(BlueprintCallable)
    TArray<FGunsmithAttachmentSlot> GetGunsmithAttachmentSlot(float MajorAxis, float MinorAxis, FVector2D Center, float Spacing, int32 Attempts);
    
};

