#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RevolveOperatorFactory.generated.h"

class UDrawAndRevolveTool;

UCLASS(Blueprintable, MinimalAPI)
class URevolveOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDrawAndRevolveTool* RevolveTool;
    
    URevolveOperatorFactory();

};

