#pragma once
#include "CoreMinimal.h"
#include "DataflowBaseContent.h"
#include "DataflowSkeletalContent.generated.h"

class UAnimationAsset;
class USkeletalMesh;

UCLASS(Blueprintable, MinimalAPI)
class UDataflowSkeletalContent : public UDataflowBaseContent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SkipSerialization, Transient, meta=(AllowPrivateAccess=true))
    UAnimationAsset* AnimationAsset;
    
public:
    UDataflowSkeletalContent();

};

