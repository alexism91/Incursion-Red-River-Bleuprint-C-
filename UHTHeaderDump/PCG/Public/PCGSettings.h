#pragma once
#include "CoreMinimal.h"
#include "PCGSettingsInterface.h"
#include "PCGSettingsOverridableParam.h"
#include "PCGSettings.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGSettings : public UPCGSettingsInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Seed;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecutionDependencyRequired;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bUseSeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGSettingsOverridableParam> CachedOverridableParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecuteOnGPU;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDumpCookedHLSL;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDumpDataDescriptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPrintShaderDebugValues;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugBufferSize;
    
    UPCGSettings();

    UFUNCTION(BlueprintCallable)
    bool UseSeed() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetTypeUnionOfIncidentEdges(const FName& PinLabel) const;
    
};

