#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AsyncLoadingTests_ConvertFromType_V2.generated.h"

UCLASS(Blueprintable)
class UAsyncLoadingTests_ConvertFromType_V2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Reference;
    
    UAsyncLoadingTests_ConvertFromType_V2();

};

