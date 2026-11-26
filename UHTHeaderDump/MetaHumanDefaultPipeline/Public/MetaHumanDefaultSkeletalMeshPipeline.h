#pragma once
#include "CoreMinimal.h"
#include "EMetaHumanRuntimeMaterialParameterSlotTarget.h"
#include "MetaHumanSkeletalMeshPipeline.h"
#include "MetaHumanDefaultSkeletalMeshPipeline.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class METAHUMANDEFAULTPIPELINE_API UMetaHumanDefaultSkeletalMeshPipeline : public UMetaHumanSkeletalMeshPipeline {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaHumanRuntimeMaterialParameterSlotTarget SlotTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SlotIndices;
    
    UMetaHumanDefaultSkeletalMeshPipeline();

};

