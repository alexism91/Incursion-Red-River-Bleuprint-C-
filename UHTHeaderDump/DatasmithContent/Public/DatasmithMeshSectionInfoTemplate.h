#pragma once
#include "CoreMinimal.h"
#include "DatasmithMeshSectionInfoTemplate.generated.h"

USTRUCT(BlueprintType)
struct FDatasmithMeshSectionInfoTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    DATASMITHCONTENT_API FDatasmithMeshSectionInfoTemplate();
};

