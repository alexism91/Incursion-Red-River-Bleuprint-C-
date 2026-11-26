#pragma once
#include "CoreMinimal.h"
#include "MetaSoundClassSearchInfo.generated.h"

USTRUCT(BlueprintType)
struct FMetaSoundClassSearchInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClassDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ClassDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Hierarchy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Keywords;
    
    METASOUNDFRONTEND_API FMetaSoundClassSearchInfo();
};

