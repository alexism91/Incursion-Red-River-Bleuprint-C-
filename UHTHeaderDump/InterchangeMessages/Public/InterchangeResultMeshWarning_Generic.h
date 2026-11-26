#pragma once
#include "CoreMinimal.h"
#include "InterchangeResultMeshWarning.h"
#include "InterchangeResultMeshWarning_Generic.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeResultMeshWarning_Generic : public UInterchangeResultMeshWarning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UInterchangeResultMeshWarning_Generic();

};

