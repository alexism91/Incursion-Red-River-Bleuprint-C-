#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptFillHolesMethod.h"
#include "GeometryScriptFillHolesOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptFillHolesOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptFillHolesMethod FillMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeleteIsolatedTriangles;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptFillHolesOptions();
};

