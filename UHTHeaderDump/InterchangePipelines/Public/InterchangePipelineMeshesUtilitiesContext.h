#pragma once
#include "CoreMinimal.h"
#include "InterchangePipelineMeshesUtilitiesContext.generated.h"

USTRUCT(BlueprintType)
struct FInterchangePipelineMeshesUtilitiesContext {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertStaticMeshToSkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertSkeletalMeshToStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConvertStaticsWithMorphTargetsToSkeletals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bImportMeshesInBoneHierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQueryGeometryOnlyIfNoInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreStaticMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreGeometryCaches;
    
    INTERCHANGEPIPELINES_API FInterchangePipelineMeshesUtilitiesContext();
};

