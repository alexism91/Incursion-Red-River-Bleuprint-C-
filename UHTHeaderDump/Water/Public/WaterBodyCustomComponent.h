#pragma once
#include "CoreMinimal.h"
#include "WaterBodyComponent.h"
#include "WaterBodyCustomComponent.generated.h"

class UStaticMeshComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UWaterBodyCustomComponent : public UWaterBodyComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NonPIEDuplicateTransient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MeshComp;
    
public:
    UWaterBodyCustomComponent(const FObjectInitializer& ObjectInitializer);

};

