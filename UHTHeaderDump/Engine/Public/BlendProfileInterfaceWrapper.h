#pragma once
#include "CoreMinimal.h"
#include "BlendProfileInterfaceWrapper.generated.h"

class IBlendProfileProviderInterface;
class UBlendProfileProviderInterface;
class UBlendProfile;

USTRUCT(BlueprintType)
struct FBlendProfileInterfaceWrapper {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSkeletonBlendProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IBlendProfileProviderInterface> BlendProfileProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlendProfile* BlendProfile;
    
public:
    ENGINE_API FBlendProfileInterfaceWrapper();
};

