#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendGraphClassPresetOptions.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendGraphClassPresetOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> InputsInheritingDefault;
    
    METASOUNDFRONTEND_API FMetasoundFrontendGraphClassPresetOptions();
};

