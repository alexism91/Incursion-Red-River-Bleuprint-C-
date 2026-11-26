#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NDISimpleCounterSimCacheData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UNDISimpleCounterSimCacheData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> Values;
    
    UNDISimpleCounterSimCacheData();

};

