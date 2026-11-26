#pragma once
#include "CoreMinimal.h"
#include "GoomBindingGroupInfo.generated.h"

USTRUCT(BlueprintType)
struct FGoomBindingGroupInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenRootCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RenLODCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimRootCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimLODCount;
    
    HAIRSTRANDSCORE_API FGoomBindingGroupInfo();
};

