#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EMeshFacesColorMode.h"
#include "EMeshSelectionToolPrimaryMode.h"
#include "MeshSelectionToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSelectionToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshSelectionToolPrimaryMode SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AngleTolerance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHitBackFaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshFacesColorMode FaceColorMode;
    
    UMeshSelectionToolProperties();

};

