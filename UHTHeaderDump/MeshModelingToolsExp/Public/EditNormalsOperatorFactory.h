#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EditNormalsOperatorFactory.generated.h"

class UEditNormalsTool;

UCLASS(Blueprintable, MinimalAPI)
class UEditNormalsOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEditNormalsTool* Tool;
    
    UEditNormalsOperatorFactory();

};

