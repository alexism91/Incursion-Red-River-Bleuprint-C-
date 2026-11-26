#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "HoleFillOperatorFactory.generated.h"

class UHoleFillTool;

UCLASS(Blueprintable, MinimalAPI)
class UHoleFillOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHoleFillTool* FillTool;
    
    UHoleFillOperatorFactory();

};

