#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=ElementID -FallbackName=ElementID
#include "SourceGeometryPartID.generated.h"

USTRUCT(BlueprintType)
struct FSourceGeometryPartID : public FElementID {
    GENERATED_BODY()
public:
    SKELETALMESHDESCRIPTION_API FSourceGeometryPartID();
};

