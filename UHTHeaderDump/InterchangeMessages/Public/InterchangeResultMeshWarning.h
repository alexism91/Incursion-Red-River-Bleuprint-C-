#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=InterchangeCore -ObjectName=InterchangeResultWarning -FallbackName=InterchangeResultWarning
#include "InterchangeResultMeshWarning.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeResultMeshWarning : public UInterchangeResultWarning {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MeshName;
    
    UInterchangeResultMeshWarning();

};

