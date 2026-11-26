#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptPruneBoneWeightsAssignmentType.h"
#include "GeometryScriptPruneBoneWeightsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptPruneBoneWeightsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptPruneBoneWeightsAssignmentType ReassignmentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoredInvalidBones;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptPruneBoneWeightsOptions();
};

