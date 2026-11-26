#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClass.h"
#include "MetasoundFrontendGraph.h"
#include "MetasoundFrontendGraphClassPresetOptions.h"
#include "MetasoundFrontendGraphClass.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendGraphClass : public FMetasoundFrontendClass {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendGraph> PagedGraphs;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendGraphClassPresetOptions PresetOptions;
    
    METASOUNDFRONTEND_API FMetasoundFrontendGraphClass();
};

