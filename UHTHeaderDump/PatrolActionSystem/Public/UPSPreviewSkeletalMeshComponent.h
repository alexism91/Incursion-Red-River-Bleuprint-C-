#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "UPSPreviewSkeletalMeshComponent.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PATROLACTIONSYSTEM_API UUPSPreviewSkeletalMeshComponent : public USkeletalMeshComponent {
    GENERATED_BODY()
public:
    UUPSPreviewSkeletalMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPreviewAnim(UAnimationAsset* Anim, float InitTime);
    
};

