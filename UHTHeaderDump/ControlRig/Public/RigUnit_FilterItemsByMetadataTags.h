#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "ERigMetaDataNameSpace.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_FilterItemsByMetadataTags.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_FilterItemsByMetadataTags : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigMetaDataNameSpace Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Inclusive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigElementKey> Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCachedRigElement> CachedIndices;
    
    CONTROLRIG_API FRigUnit_FilterItemsByMetadataTags();
};

