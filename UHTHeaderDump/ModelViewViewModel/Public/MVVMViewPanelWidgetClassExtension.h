#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldPath.h"
#include "MVVMViewClassExtension.h"
#include "Templates/SubclassOf.h"
#include "MVVMViewPanelWidgetClassExtension.generated.h"

class UPanelSlot;
class UUserWidget;

UCLASS(Blueprintable, MinimalAPI)
class UMVVMViewPanelWidgetClassExtension : public UMVVMViewClassExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryViewModelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EntryWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelSlot* SlotTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PanelPropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* EntryViewModelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath WidgetPath;
    
public:
    UMVVMViewPanelWidgetClassExtension();

};

