#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InternalToolFrameworkActor -FallbackName=InternalToolFrameworkActor
#include "PreviewMeshActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class APreviewMeshActor : public AInternalToolFrameworkActor {
    GENERATED_BODY()
public:
    APreviewMeshActor(const FObjectInitializer& ObjectInitializer);

};

