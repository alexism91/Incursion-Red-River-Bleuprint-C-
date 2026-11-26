#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "MeshSculptBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UMeshSculptBrushOpProps : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsStrengthPressureEnabled;
    
    UMeshSculptBrushOpProps();

};

