#pragma once
#include "CoreMinimal.h"
#include "WidgetAnimationHandle.generated.h"

class UUserWidget;

USTRUCT(BlueprintType)
struct FWidgetAnimationHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UUserWidget> WeakUserWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StateIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StateSerial;
    
public:
    UMG_API FWidgetAnimationHandle();
};

