#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RetargetOpStack.generated.h"

class URetargetOpBase;

UCLASS(Blueprintable, MinimalAPI)
class URetargetOpStack : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URetargetOpBase*> RetargetOps;
    
    URetargetOpStack();

};

