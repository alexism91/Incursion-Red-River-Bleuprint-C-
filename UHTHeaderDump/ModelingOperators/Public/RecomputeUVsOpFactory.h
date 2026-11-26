#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RecomputeUVsOpFactory.generated.h"

class URecomputeUVsToolProperties;

UCLASS(Blueprintable, MinimalAPI)
class URecomputeUVsOpFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URecomputeUVsToolProperties* Settings;
    
    URecomputeUVsOpFactory();

};

