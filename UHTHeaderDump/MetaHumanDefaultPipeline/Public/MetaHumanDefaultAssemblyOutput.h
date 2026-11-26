#pragma once
#include "CoreMinimal.h"
#include "MetaHumanGroomPipelineAssemblyOutput.h"
#include "MetaHumanOutfitPipelineAssemblyOutput.h"
#include "MetaHumanSkeletalMeshPipelineAssemblyOutput.h"
#include "MetaHumanDefaultAssemblyOutput.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FMetaHumanDefaultAssemblyOutput {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* FaceMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* BodyMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanGroomPipelineAssemblyOutput Hair;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanGroomPipelineAssemblyOutput Eyebrows;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanGroomPipelineAssemblyOutput Beard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanGroomPipelineAssemblyOutput Mustache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanGroomPipelineAssemblyOutput Eyelashes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMetaHumanGroomPipelineAssemblyOutput Peachfuzz;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanSkeletalMeshPipelineAssemblyOutput> SkeletalMeshData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMetaHumanOutfitPipelineAssemblyOutput> ClothData;
    
    METAHUMANDEFAULTPIPELINE_API FMetaHumanDefaultAssemblyOutput();
};

