#pragma once
#include "CoreMinimal.h"
#include "BaseScriptableToolBuilder.h"
#include "CustomScriptableToolBuilderContainer.generated.h"

class UCustomScriptableToolBuilderComponentBase;

UCLASS(Blueprintable, NonTransient)
class SCRIPTABLETOOLSFRAMEWORK_API UCustomScriptableToolBuilderContainer : public UBaseScriptableToolBuilder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCustomScriptableToolBuilderComponentBase* BuilderInstance;
    
public:
    UCustomScriptableToolBuilderContainer();

};

