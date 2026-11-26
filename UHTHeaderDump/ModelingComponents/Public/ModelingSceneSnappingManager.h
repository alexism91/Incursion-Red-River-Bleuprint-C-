#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=SceneSnappingManager -FallbackName=SceneSnappingManager
#include "ModelingSceneSnappingManager.generated.h"

class UInteractiveToolsContext;

UCLASS(Blueprintable, MinimalAPI)
class UModelingSceneSnappingManager : public USceneSnappingManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInteractiveToolsContext* ParentContext;
    
public:
    UModelingSceneSnappingManager();

};

