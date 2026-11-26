#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GeometryCacheCodecBase.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UGeometryCacheCodecBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> TopologyRanges;
    
public:
    UGeometryCacheCodecBase();

};

