#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MetasoundFrontendLiteral.h"
#include "MetasoundFrontendClassInputDefault.generated.h"

USTRUCT(BlueprintType)
struct FMetasoundFrontendClassInputDefault {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetasoundFrontendLiteral Literal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid PageID;
    
    METASOUNDFRONTEND_API FMetasoundFrontendClassInputDefault();
};

