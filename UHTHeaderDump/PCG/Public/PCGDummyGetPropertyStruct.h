#pragma once
#include "CoreMinimal.h"
#include "PCGDummyGetPropertyLevel2Struct.h"
#include "PCGDummyGetPropertyStruct.generated.h"

USTRUCT(BlueprintType)
struct FPCGDummyGetPropertyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IntArrayProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FloatProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDummyGetPropertyLevel2Struct Level2Struct;
    
    PCG_API FPCGDummyGetPropertyStruct();
};

