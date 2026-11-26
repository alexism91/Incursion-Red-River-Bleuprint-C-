#pragma once
#include "CoreMinimal.h"
#include "DatasmithMeshSectionInfoTemplate.h"
#include "DatasmithMeshSectionInfoMapTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithMeshSectionInfoMapTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FDatasmithMeshSectionInfoTemplate> Map;
    
    DATASMITHCONTENT_API FDatasmithMeshSectionInfoMapTemplate();
};

