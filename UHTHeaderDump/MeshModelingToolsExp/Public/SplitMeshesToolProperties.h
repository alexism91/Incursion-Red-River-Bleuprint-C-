#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "ESplitMeshesMethod.h"
#include "SplitMeshesToolProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class USplitMeshesToolProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESplitMeshesMethod SplitMethod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ConnectVerticesThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTransferMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsInSelectionMode;
    
    USplitMeshesToolProperties();

};

