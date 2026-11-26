#pragma once
#include "CoreMinimal.h"
#include "PropertyBagPropertyDesc.h"
#include "ScriptStruct.h"
#include "PropertyBag.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UPropertyBag : public UScriptStruct {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyBagPropertyDesc> PropertyDescs;
    
public:
    UPropertyBag();

};

