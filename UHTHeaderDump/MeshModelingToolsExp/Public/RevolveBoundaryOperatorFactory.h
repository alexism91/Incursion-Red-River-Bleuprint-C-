#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RevolveBoundaryOperatorFactory.generated.h"

class URevolveBoundaryTool;

UCLASS(Blueprintable, MinimalAPI)
class URevolveBoundaryOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URevolveBoundaryTool* RevolveBoundaryTool;
    
    URevolveBoundaryOperatorFactory();

};

