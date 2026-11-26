#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=TopLevelAssetPath -FallbackName=TopLevelAssetPath
#include "ActorContainerID.h"
#include "ActorLocatorFragmentResolveParameter.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct FActorLocatorFragmentResolveParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UWorld* StreamingWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FActorContainerID ContainerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTopLevelAssetPath SourceAssetPath;
    
    ENGINE_API FActorLocatorFragmentResolveParameter();
};

