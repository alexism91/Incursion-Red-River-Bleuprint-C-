#pragma once
#include "CoreMinimal.h"
#include "Visual.h"
#include "PanelSlot.generated.h"

class UPanelWidget;
class UWidget;

UCLASS(Blueprintable, MinimalAPI)
class UPanelSlot : public UVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content;
    
    UPanelSlot();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetContent() const;
    
};

