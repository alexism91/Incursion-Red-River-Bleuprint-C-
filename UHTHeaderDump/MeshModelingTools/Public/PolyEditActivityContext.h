#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "PolyEditActivityContext.generated.h"

class UMeshOpPreviewWithBackgroundCompute;
class UPolyEditCommonProperties;
class UPolygonSelectionMechanic;

UCLASS(Blueprintable, MinimalAPI)
class UPolyEditActivityContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolyEditCommonProperties* CommonProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshOpPreviewWithBackgroundCompute* preview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPolygonSelectionMechanic* SelectionMechanic;
    
    UPolyEditActivityContext();

};

