#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=PerPlatformBool -FallbackName=PerPlatformBool
#include "ESkeletalMeshVertexAttributeDataType.h"
#include "SkeletalMeshVertexAttributeInfo.generated.h"

USTRUCT(BlueprintType)
struct FSkeletalMeshVertexAttributeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPerPlatformBool EnabledForRender;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ESkeletalMeshVertexAttributeDataType DataType;
    
    ENGINE_API FSkeletalMeshVertexAttributeInfo();
};

