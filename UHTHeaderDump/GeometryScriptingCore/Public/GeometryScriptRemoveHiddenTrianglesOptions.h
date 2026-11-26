#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptRemoveHiddenTrianglesMethod.h"
#include "GeometryScriptRemoveHiddenTrianglesOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptRemoveHiddenTrianglesOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptRemoveHiddenTrianglesMethod Method;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SamplesPerTriangle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ShrinkSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindingIsoValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RaysPerSample;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCompactResult;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptRemoveHiddenTrianglesOptions();
};

