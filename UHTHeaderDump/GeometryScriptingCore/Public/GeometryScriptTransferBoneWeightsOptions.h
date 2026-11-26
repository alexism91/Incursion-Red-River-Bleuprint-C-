#pragma once
#include "CoreMinimal.h"
#include "EOutputTargetMeshBones.h"
#include "ETransferBoneWeightsMethod.h"
#include "GeometryScriptBoneWeightProfile.h"
#include "GeometryScriptTransferBoneWeightsOptions.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptTransferBoneWeightsOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETransferBoneWeightsMethod TransferMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EOutputTargetMeshBones OutputTargetMeshBones;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptBoneWeightProfile SourceProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGeometryScriptBoneWeightProfile TargetProfile;
    
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
    FName InpaintMask;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptTransferBoneWeightsOptions();
};

