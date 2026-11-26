#pragma once
#include "CoreMinimal.h"
#include "CachedRigElement.h"
#include "ERigMetaDataNameSpace.h"
#include "RigElementKey.h"
#include "RigUnitMutable.h"
#include "RigUnit_SetMetadataTagArray.generated.h"

USTRUCT(BlueprintType)
struct FRigUnit_SetMetadataTagArray : public FRigUnitMutable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRigElementKey Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERigMetaDataNameSpace Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCachedRigElement CachedIndex;
    
    CONTROLRIG_API FRigUnit_SetMetadataTagArray();
};

