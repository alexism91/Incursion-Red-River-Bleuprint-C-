#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SocialManager.generated.h"

class USocialDebugTools;
class USocialToolkit;

UCLASS(Blueprintable, MinimalAPI, Config=Game, Within=GameInstance)
class USocialManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USocialToolkit*> SocialToolkits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialDebugTools* SocialDebugTools;
    
public:
    USocialManager();

};

