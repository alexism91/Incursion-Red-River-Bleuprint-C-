#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AsyncLoadingTests_ConvertFromType_V1.generated.h"

UCLASS(Blueprintable)
class UAsyncLoadingTests_ConvertFromType_V1 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UObject> Reference;
    
    UAsyncLoadingTests_ConvertFromType_V1();

};

