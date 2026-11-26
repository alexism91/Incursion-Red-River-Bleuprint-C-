#pragma once
#include "CoreMinimal.h"
#include "IRRConfigDiffEntry.generated.h"

USTRUCT(BlueprintType)
struct IRRCONFIG_API FIRRConfigDiffEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewValue;
    
    FIRRConfigDiffEntry();
};

