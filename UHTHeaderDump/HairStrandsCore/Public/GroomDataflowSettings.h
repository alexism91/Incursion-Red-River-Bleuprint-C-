#pragma once
#include "CoreMinimal.h"
#include "GroomDataflowSettings.generated.h"

class UDataflow;
class USkeletalMesh;

USTRUCT(BlueprintType)
struct FGroomDataflowSettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataflow* DataflowAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DataflowTerminal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMesh*> SkeletalMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> MeshLODs;
    
public:
    HAIRSTRANDSCORE_API FGroomDataflowSettings();
};

