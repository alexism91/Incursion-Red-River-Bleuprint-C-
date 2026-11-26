#pragma once
#include "CoreMinimal.h"
#include "EGeometryScriptIndexType.h"
#include "EGeometryScriptMeshDifferenceReason.h"
#include "GeometryScriptMeshDifferenceInfo.generated.h"

USTRUCT(BlueprintType)
struct FGeometryScriptMeshDifferenceInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptMeshDifferenceReason reason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Detail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetMeshElementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OtherMeshElementID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGeometryScriptIndexType ElementIDType;
    
    GEOMETRYSCRIPTINGCORE_API FGeometryScriptMeshDifferenceInfo();
};

