#pragma once
#include "CoreMinimal.h"
#include "MetasoundFrontendClassName.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendClassName {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Namespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Variant;
    
    METASOUNDFRONTEND_API FMetasoundFrontendClassName();
};

