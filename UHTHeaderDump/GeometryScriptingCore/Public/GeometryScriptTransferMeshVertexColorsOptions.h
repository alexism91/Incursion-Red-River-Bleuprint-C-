#pragma once
#include "CoreMinimal.h"
#include "ETransferVertexColorMethod.h"
#include "GeometryScriptTransferMeshVertexColorsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptTransferMeshVertexColorsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransferVertexColorMethod TransferMethod;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double RadiusPercentage;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double NormalThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool LayeredMeshSupport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumSmoothingIterations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmoothingStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHardEdges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BiasRatio;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptTransferMeshVertexColorsOptions();
};

