#pragma once
#include "CoreMinimal.h"
#include "CurrentStatItem.h"
#include "DefaultAttachment.h"
#include "SecureContainerShippedItem.generated.h"

class UIRRItemDefinition;

USTRUCT(BlueprintType)
struct FSecureContainerShippedItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDefaultAttachment> Attachments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurrentStatItem> stats;
    
    TEST_C_API FSecureContainerShippedItem();
};

