#pragma once
#include "CoreMinimal.h"
#include "WidgetChild.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct FWidgetChild {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWidget> WidgetPtr;
    
public:
    UMG_API FWidgetChild();
};

