#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "PickUpContainerItem.h"
#include "IRRMagazineBulletVisual.generated.h"

class AActor;
class UInstancedStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRMagazineBulletVisual : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UInstancedStaticMeshComponent*> BulletMeshes;
    
public:
    UIRRMagazineBulletVisual(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void RebuildMagazineBullets(AActor* Magazine, const FPickUpContainerItem& PickUpContainerItem);
    
};

