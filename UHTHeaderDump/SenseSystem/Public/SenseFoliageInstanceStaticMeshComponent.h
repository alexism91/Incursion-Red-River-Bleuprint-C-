#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Foliage -ObjectName=FoliageInstancedStaticMeshComponent -FallbackName=FoliageInstancedStaticMeshComponent
#include "SenseFoliageInstanceStaticMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SENSESYSTEM_API USenseFoliageInstanceStaticMeshComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Transparency;
    
    USenseFoliageInstanceStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetTransparency();
    
};

