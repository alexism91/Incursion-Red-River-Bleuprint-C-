#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MirrorOperatorFactory.generated.h"

class UMirrorTool;

UCLASS(Blueprintable, MinimalAPI)
class UMirrorOperatorFactory : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMirrorTool* MirrorTool;
    
    UMirrorOperatorFactory();

};

