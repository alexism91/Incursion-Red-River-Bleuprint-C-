#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "IRRTreeCrownSubsystem.generated.h"

class UIRRTreeCrownProfiles;

UCLASS(Blueprintable)
class IRRADVANCEDAI_API UIRRTreeCrownSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIRRTreeCrownProfiles* Profiles;
    
public:
    UIRRTreeCrownSubsystem();

};

