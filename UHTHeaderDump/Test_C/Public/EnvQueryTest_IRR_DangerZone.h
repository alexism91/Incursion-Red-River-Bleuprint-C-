#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryTest -FallbackName=EnvQueryTest
#include "EnvQueryTest_IRR_DangerZone.generated.h"

UCLASS(Blueprintable)
class TEST_C_API UEnvQueryTest_IRR_DangerZone : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantInDangerZone;
    
    UEnvQueryTest_IRR_DangerZone();

};

