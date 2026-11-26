#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MaterialParameterInfo -FallbackName=MaterialParameterInfo
#include "EMetaHumanRuntimeMaterialParameterSlotTarget.h"
#include "EMetaHumanRuntimeMaterialParameterType.h"
#include "MetaHumanMaterialParameter.generated.h"

USTRUCT(BlueprintType)
struct FMetaHumanMaterialParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InstanceParameterName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaHumanRuntimeMaterialParameterSlotTarget SlotTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SlotNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> SlotIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMaterialParameterInfo MaterialParameter;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMetaHumanRuntimeMaterialParameterType ParameterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> PropertyMetaData;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanMaterialParameter();
};

