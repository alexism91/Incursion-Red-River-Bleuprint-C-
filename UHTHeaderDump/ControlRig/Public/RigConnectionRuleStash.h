#pragma once
#include "CoreMinimal.h"
#include "RigConnectionRuleStash.generated.h"

USTRUCT(BlueprintType)
struct FRigConnectionRuleStash {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ScriptStructPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ExportedText;
    
    CONTROLRIG_API FRigConnectionRuleStash();
};

