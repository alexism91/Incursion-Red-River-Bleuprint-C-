#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeyType.h"
#include "BlackboardKeyType_Object.generated.h"

class UObject;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI)
class UBlackboardKeyType_Object : public UBlackboardKeyType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UClass* BaseClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* DefaultValue;
    
    UBlackboardKeyType_Object();

};

