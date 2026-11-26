#pragma once
#include "CoreMinimal.h"
#include "UniversalObjectLocatorFragment.h"
#include "UniversalObjectLocator.generated.h"

USTRUCT(BlueprintType)
struct FUniversalObjectLocator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUniversalObjectLocatorFragment> Fragments;
    
public:
    UNIVERSALOBJECTLOCATOR_API FUniversalObjectLocator();
};

