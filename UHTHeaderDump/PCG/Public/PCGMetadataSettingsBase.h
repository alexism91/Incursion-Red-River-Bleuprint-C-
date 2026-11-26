#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyOutputSelector.h"
#include "PCGDefaultValueContainer.h"
#include "PCGSettings.h"
#include "PCGSettingsDefaultValueProvider.h"
#include "PCGMetadataSettingsBase.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGMetadataSettingsBase : public UPCGSettings, public IPCGSettingsDefaultValueProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyOutputSelector OutputTarget;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName OutputDataFromPin;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGDefaultValueContainer DefaultValues;
    
public:
    UPCGMetadataSettingsBase();

protected:
    UFUNCTION(BlueprintCallable)
    TArray<FName> GetOutputDataFromPinOptions() const;
    

    // Fix for true pure virtual functions not being implemented
};

