#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MetaHumanDefaultSkeletalMeshPipelineMaterialParameters.generated.h"

UCLASS(Blueprintable)
class METAHUMANDEFAULTPIPELINE_API UMetaHumanDefaultSkeletalMeshPipelineMaterialParameters : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color2;
    
    UMetaHumanDefaultSkeletalMeshPipelineMaterialParameters();

};

