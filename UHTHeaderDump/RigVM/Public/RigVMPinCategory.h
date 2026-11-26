#pragma once
#include "CoreMinimal.h"
#include "RigVMPinCategory.generated.h"

USTRUCT(BlueprintType)
struct FRigVMPinCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Path;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> Elements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExpandedByDefault;
    
    RIGVM_API FRigVMPinCategory();
};

