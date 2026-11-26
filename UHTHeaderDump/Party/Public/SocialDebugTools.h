#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialDebugTools.generated.h"

UCLASS(Blueprintable, MinimalAPI, Config=Game, Within=SocialManager)
class USocialDebugTools : public UObject {
    GENERATED_BODY()
public:
    USocialDebugTools();

};

