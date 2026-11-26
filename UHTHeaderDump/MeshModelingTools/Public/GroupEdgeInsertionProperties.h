#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EGroupEdgeInsertionMode.h"
#include "GroupEdgeInsertionProperties.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGroupEdgeInsertionProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EGroupEdgeInsertionMode InsertionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContinuousInsertion;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, meta=(AllowPrivateAccess=true))
    double VertexTolerance;
    
    UGroupEdgeInsertionProperties();

};

