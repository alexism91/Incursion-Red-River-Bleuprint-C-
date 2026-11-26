#pragma once
#include "CoreMinimal.h"
#include "EMetasoundFrontendVertexAccessType.h"
#include "MetaSoundClassVertexInfo.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundClassVertexInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TypeName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetasoundFrontendVertexAccessType AccessType;
    
    METASOUNDFRONTEND_API FMetaSoundClassVertexInfo();
};

