#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InteractiveToolsFramework -ObjectName=InternalToolFrameworkActor -FallbackName=InternalToolFrameworkActor
#include "PreviewGeometryActor.generated.h"

UCLASS(Blueprintable, MinimalAPI, NoExport, NonTransient)
class APreviewGeometryActor : public AInternalToolFrameworkActor {
    GENERATED_BODY()
public:
    APreviewGeometryActor(const FObjectInitializer& ObjectInitializer);

};

