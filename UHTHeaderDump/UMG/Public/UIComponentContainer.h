#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UIComponentTarget.h"
#include "UIComponentContainer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UUIComponentContainer : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUIComponentTarget> Components;
    
public:
    UUIComponentContainer();

};

