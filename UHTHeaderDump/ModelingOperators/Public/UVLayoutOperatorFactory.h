#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UVLayoutOperatorFactory.generated.h"

class UUVLayoutProperties;

UCLASS(Blueprintable, MinimalAPI)
class UUVLayoutOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVLayoutProperties* Settings;
    
    UUVLayoutOperatorFactory();

};

