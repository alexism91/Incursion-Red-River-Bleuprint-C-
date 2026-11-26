#pragma once
#include "CoreMinimal.h"
#include "EConnectorType.h"
#include "RigConnectionRuleStash.h"
#include "RigConnectorSettings.generated.h"

USTRUCT(BlueprintType)
struct FRigConnectorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EConnectorType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOptional;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigConnectionRuleStash> Rules;
    
    CONTROLRIG_API FRigConnectorSettings();
};

