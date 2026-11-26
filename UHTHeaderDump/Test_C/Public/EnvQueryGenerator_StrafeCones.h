#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator_Cone -FallbackName=EnvQueryGenerator_Cone
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_StrafeCones.generated.h"

class UEnvQueryContext;
class UNavigationQueryFilter;

UCLASS(Blueprintable, EditInlineNew)
class TEST_C_API UEnvQueryGenerator_StrafeCones : public UEnvQueryGenerator_Cone {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> TargetContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> FilterClass;
    
public:
    UEnvQueryGenerator_StrafeCones();

};

