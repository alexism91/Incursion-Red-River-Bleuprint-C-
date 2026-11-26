#pragma once
#include "CoreMinimal.h"
#include "EPCGAttributePropertySelection.h"
#include "EPCGExtraProperties.h"
#include "PCGAttributePropertySelector.generated.h"

USTRUCT(BlueprintType)
struct FPCGAttributePropertySelector {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGAttributePropertySelection Selection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DomainName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttributeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ExtraNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGExtraProperties ExtraProperty;
    
public:
    PCG_API FPCGAttributePropertySelector();
};

