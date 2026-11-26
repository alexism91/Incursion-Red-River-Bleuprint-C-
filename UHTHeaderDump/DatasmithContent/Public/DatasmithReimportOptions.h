#pragma once
#include "CoreMinimal.h"
#include "DatasmithReimportOptions.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithReimportOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnDeletedActors;
    
    DATASMITHCONTENT_API FDatasmithReimportOptions();
};

