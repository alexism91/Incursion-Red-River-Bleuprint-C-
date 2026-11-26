#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InteractiveToolPropertySet -FallbackName=InteractiveToolPropertySet
#include "EMeshSculptFalloffType.h"
#include "EMeshVertexSculptBrushFilterType.h"
#include "EMeshVertexSculptBrushType.h"
#include "VertexBrushSculptProperties.generated.h"

class UMeshVertexSculptTool;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UVertexBrushSculptProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshVertexSculptBrushType PrimaryBrushType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PrimaryBrushID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshSculptFalloffType PrimaryFalloffType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMeshVertexSculptBrushFilterType BrushFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanFreezeTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMeshVertexSculptTool> Tool;
    
    UVertexBrushSculptProperties();

};

