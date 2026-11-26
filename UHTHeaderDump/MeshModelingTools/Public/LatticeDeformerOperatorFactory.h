#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LatticeDeformerOperatorFactory.generated.h"

class ULatticeDeformerTool;

UCLASS(Blueprintable, MinimalAPI)
class ULatticeDeformerOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULatticeDeformerTool* LatticeDeformerTool;
    
    ULatticeDeformerOperatorFactory();

};

