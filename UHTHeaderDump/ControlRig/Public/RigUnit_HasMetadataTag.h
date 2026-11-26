#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "ERigMetaDataNameSpace.h"
#include "RigElementKey.h"
#include "RigUnit.h"
#include "RigUnit_HasMetadataTag.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_HasMetadataTag : public FRigUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigMetaDataNameSpace Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Found;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedIndex;
    
    CONTROLRIG_API FRigUnit_HasMetadataTag();
};

