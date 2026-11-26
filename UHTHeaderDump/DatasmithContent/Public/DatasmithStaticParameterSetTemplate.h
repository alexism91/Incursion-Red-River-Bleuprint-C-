#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticParameterSetTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithStaticParameterSetTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> StaticSwitchParameters;
    
    DATASMITHCONTENT_API FDatasmithStaticParameterSetTemplate();
};

