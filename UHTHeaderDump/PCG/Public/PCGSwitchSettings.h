#pragma once
#include "CoreMinimal.h"
#include "EPCGControlFlowSelectionMode.h"
#include "EnumSelector.h"
#include "PCGControlFlowSettings.h"
#include "PCGSwitchSettings.generated.h"

UCLASS(Blueprintable)
class UPCGSwitchSettings : public UPCGControlFlowSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPCGControlFlowSelectionMode SelectionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IntegerSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> IntOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StringSelection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> StringOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnumSelector EnumSelection;
    
    UPCGSwitchSettings();

};

