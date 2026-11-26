#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UVProjectionOperatorFactory.generated.h"

class UUVProjectionTool;

UCLASS(Blueprintable, MinimalAPI)
class UUVProjectionOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUVProjectionTool* Tool;
    
    UUVProjectionOperatorFactory();

};

