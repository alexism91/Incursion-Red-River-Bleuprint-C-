#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SpaceDeformerOperatorFactory.generated.h"

class UMeshSpaceDeformerTool;

UCLASS(Blueprintable, MinimalAPI)
class USpaceDeformerOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMeshSpaceDeformerTool* SpaceDeformerTool;
    
    USpaceDeformerOperatorFactory();

};

