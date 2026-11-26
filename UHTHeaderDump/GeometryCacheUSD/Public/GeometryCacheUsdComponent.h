#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GeometryCache -ObjectName=GeometryCacheComponent -FallbackName=GeometryCacheComponent
#include "GeometryCacheUsdComponent.generated.h"

UCLASS(Blueprintable, HideDropdown, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GEOMETRYCACHEUSD_API UGeometryCacheUsdComponent : public UGeometryCacheComponent {
    GENERATED_BODY()
public:
    UGeometryCacheUsdComponent(const FObjectInitializer& ObjectInitializer);

};

