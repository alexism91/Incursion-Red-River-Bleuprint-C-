#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MetaHumanRealtimeSmoothingParam.h"
#include "MetaHumanRealtimeSmoothingParams.generated.h"

UCLASS(Blueprintable)
class METAHUMANCORETECH_API UMetaHumanRealtimeSmoothingParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMetaHumanRealtimeSmoothingParam> Parameters;
    
    UMetaHumanRealtimeSmoothingParams();

};

