#pragma once
#include "CoreMinimal.h"
#include "NetSerializerConfig.h"
#include "InstancedStructNetSerializerConfig.generated.h"

class UScriptStruct;

USTRUCT(BlueprintType)
struct FInstancedStructNetSerializerConfig : public FNetSerializerConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UScriptStruct>> SupportedTypes;
    
    IRISCORE_API FInstancedStructNetSerializerConfig();
};

