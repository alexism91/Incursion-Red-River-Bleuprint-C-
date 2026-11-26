#pragma once
#include "CoreMinimal.h"
#include "DatasmithTessellationOptions.h"
#include "EDatasmithCADRetessellationRule.h"
#include "DatasmithRetessellationOptions.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithRetessellationOptions : public FDatasmithTessellationOptions {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDatasmithCADRetessellationRule RetessellationRule;
    
    DATASMITHCONTENT_API FDatasmithRetessellationOptions();
};

