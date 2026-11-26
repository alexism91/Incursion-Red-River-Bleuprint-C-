#pragma once
#include "CoreMinimal.h"
#include "DragonIKTraceMParams.h"
#include "DragonIKTraceParamKeyValuePair.generated.h"

USTRUCT(BlueprintType)
struct FDragonIKTraceParamKeyValuePair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDragonIKTraceMParams trace_params;
    
    DRAGONIKPLUGIN_API FDragonIKTraceParamKeyValuePair();
};

