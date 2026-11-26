#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "MetaHumanPipelineBuiltData.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanPipelineBuiltData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct BuildOutput;
    
    METAHUMANCHARACTERPALETTE_API FMetaHumanPipelineBuiltData();
};

