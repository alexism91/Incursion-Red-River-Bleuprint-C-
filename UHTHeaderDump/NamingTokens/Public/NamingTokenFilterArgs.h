#pragma once
#include "CoreMinimal.h"
#include "NamingTokenFilterArgs.generated.h"

USTRUCT(BlueprintType)
struct FNamingTokenFilterArgs {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> AdditionalNamespacesToInclude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIncludeGlobal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceCaseSensitive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNativeOnly;
    
    NAMINGTOKENS_API FNamingTokenFilterArgs();
};

