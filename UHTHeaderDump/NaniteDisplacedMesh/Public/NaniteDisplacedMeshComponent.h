#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent
#include "NaniteDisplacedMeshComponent.generated.h"

class UNaniteDisplacedMesh;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNaniteDisplacedMeshComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNaniteDisplacedMesh* DisplacedMesh;
    
    UNaniteDisplacedMeshComponent(const FObjectInitializer& ObjectInitializer);

};

