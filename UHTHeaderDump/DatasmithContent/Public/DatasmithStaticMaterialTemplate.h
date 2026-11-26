#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMaterialTemplate.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct FDatasmithStaticMaterialTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    DATASMITHCONTENT_API FDatasmithStaticMaterialTemplate();
};

