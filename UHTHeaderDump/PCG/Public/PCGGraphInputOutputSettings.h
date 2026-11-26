#pragma once
#include "CoreMinimal.h"
#include "PCGPinProperties.h"
#include "PCGSettings.h"
#include "PCGGraphInputOutputSettings.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UPCGGraphInputOutputSettings : public UPCGSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPinProperties> Pins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> PinLabels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPinProperties> CustomPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasAddedDefaultPin;
    
public:
    UPCGGraphInputOutputSettings();

};

