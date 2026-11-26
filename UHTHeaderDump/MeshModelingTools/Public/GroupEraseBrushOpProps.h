#pragma once
#include "CoreMinimal.h"
#include "MeshSculptBrushOpProps.h"
#include "GroupEraseBrushOpProps.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UGroupEraseBrushOpProps : public UMeshSculptBrushOpProps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Group;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyEraseCurrent;
    
    UGroupEraseBrushOpProps();

};

