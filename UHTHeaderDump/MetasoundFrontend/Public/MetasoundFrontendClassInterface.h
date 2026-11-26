#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendClassEnvironmentVariable.h"
#include "MetasoundFrontendClassInput.h"
#include "MetasoundFrontendClassOutput.h"
#include "MetasoundFrontendClassInterface.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendClassInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendClassInput> Inputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendClassOutput> Outputs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetasoundFrontendClassEnvironmentVariable> Environment;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGuid ChangeID;
    
public:
    METASOUNDFRONTEND_API FMetasoundFrontendClassInterface();
};

