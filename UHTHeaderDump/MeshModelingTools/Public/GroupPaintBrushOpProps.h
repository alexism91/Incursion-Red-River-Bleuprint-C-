#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "GroupPaintBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGroupPaintBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyPaintUngrouped;
    
    UGroupPaintBrushOpProps();

};

