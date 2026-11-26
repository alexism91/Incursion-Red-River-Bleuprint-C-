#pragma once
#include "CoreMinimal.h"
#include "ModelingToolsAxisFilter.generated.h"

USTRUCT(BlueprintType)
struct FModelingToolsAxisFilter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAxisX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAxisY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAxisZ;
    
    MODELINGCOMPONENTS_API FModelingToolsAxisFilter();
};

