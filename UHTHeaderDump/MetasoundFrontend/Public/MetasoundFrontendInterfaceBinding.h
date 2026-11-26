#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendInterfaceVertexBinding.h"
#include "MetasoundFrontendVersion.h"
#include "MetasoundFrontendInterfaceBinding.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendInterfaceBinding {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersion OutputInterfaceVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendVersion InputInterfaceVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BindingPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendInterfaceVertexBinding> VertexBindings;
    
    METASOUNDFRONTEND_API FMetasoundFrontendInterfaceBinding();
};

