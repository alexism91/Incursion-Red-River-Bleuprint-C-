#pragma once
#include "CoreMinimal.h"
#include "IRRAIGroupData.generated.h"

class AIRRAIBaseCharacter;
class UIRRAIGroupComponent;

USTRUCT(BlueprintType)
struct TEST_C_API FIRRAIGroupData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIRRAIGroupComponent*> AliveMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIRRAIBaseCharacter*> DeadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIRRAIGroupComponent* Leader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeLeaderAssigned;
    
    FIRRAIGroupData();
};

