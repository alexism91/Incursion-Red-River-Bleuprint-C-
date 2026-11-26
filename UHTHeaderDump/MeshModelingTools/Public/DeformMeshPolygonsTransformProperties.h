#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EGroupTopologyDeformationStrategy.h"
#include "EQuickTransformerMode.h"
#include "EWeightScheme.h"
#include "DeformMeshPolygonsTransformProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UDeformMeshPolygonsTransformProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupTopologyDeformationStrategy DeformationStrategy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuickTransformerMode TransformMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectFaces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSelectVertices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowWireframe;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EWeightScheme SelectedWeightScheme;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double HandleWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPostFixHandles;
    
    UDeformMeshPolygonsTransformProperties();

};

