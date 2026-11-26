#pragma once
#include "CoreMinimal.h"
#include "MVVMVCompiledFieldPath.h"
#include "MVVMViewClassExtension.h"
#include "MVVMViewListViewBaseClassExtension.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMVVMViewListViewBaseClassExtension : public UMVVMViewClassExtension {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName WidgetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName EntryViewModelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMVVMVCompiledFieldPath WidgetPath;
    
public:
    UMVVMViewListViewBaseClassExtension();

};

