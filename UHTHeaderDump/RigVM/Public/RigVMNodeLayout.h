#pragma once
#include "CoreMinimal.h"
#include "RigVMPinCategory.h"
#include "RigVMNodeLayout.generated.h"

USTRUCT(BlueprintType)
struct FRigVMNodeLayout {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigVMPinCategory> Categories;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, int32> PinIndexInCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FString> DisplayNames;
    
    RIGVM_API FRigVMNodeLayout();
};

