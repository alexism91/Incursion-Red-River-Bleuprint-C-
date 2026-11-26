#pragma once
#include "CoreMinimal.h"
#include "MassProcessor.h"
#include "MassObserverProcessor.generated.h"

class UScriptStruct;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew, MinimalAPI, Config=Engine)
class UMassObserverProcessor : public UMassProcessor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoRegisterWithObserverRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UScriptStruct* ObservedType;
    
public:
    UMassObserverProcessor();

};

