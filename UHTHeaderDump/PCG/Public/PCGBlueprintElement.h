#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=RandomStream -FallbackName=RandomStream
#include "EPCGSettingsType.h"
#include "PCGContext.h"
#include "PCGDataCollection.h"
#include "PCGPinProperties.h"
#include "PCGPoint.h"
#include "PCGPreConfiguredSettingsInfo.h"
#include "PCGBlueprintElement.generated.h"

class UPCGMetadata;
class UPCGPin;
class UPCGPointData;
class UPCGSettings;
class UPCGSpatialData;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UPCGBlueprintElement : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCacheable;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bComputeFullDataCrc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresGameThread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPinProperties> CustomInputPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPCGPinProperties> CustomOutputPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDefaultInPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDefaultOutPin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDynamicPins;
    
    UPCGBlueprintElement();

    UFUNCTION(BlueprintImplementableEvent)
    TArray<FPCGPoint> VariableLoopBody(const FPCGContext& InContext, const UPCGPointData* InData, const FPCGPoint& InPoint, UPCGMetadata* OutMetadata, int64 Iteration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void VariableLoop(UPARAM(Ref) FPCGContext& InContext, const UPCGPointData* InData, UPCGPointData*& OutData, UPCGPointData* OptionalOutData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool PointLoopBody(const FPCGContext& InContext, const UPCGPointData* InData, const FPCGPoint& InPoint, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata, int64 Iteration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void PointLoop(UPARAM(Ref) FPCGContext& InContext, const UPCGPointData* InData, UPCGPointData*& OutData, UPCGPointData* OptionalOutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EPCGSettingsType NodeTypeOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName NodeTitleOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FLinearColor NodeColorOverride() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool NestedLoopBody(const FPCGContext& InContext, const UPCGPointData* InOuterData, const UPCGPointData* InInnerData, const FPCGPoint& InOuterPoint, const FPCGPoint& InInnerPoint, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata, int64 OuterIteration, int64 InnerIteration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void NestedLoop(UPARAM(Ref) FPCGContext& InContext, const UPCGPointData* InOuterData, const UPCGPointData* InInnerData, UPCGPointData*& OutData, UPCGPointData* OptionalOutData) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    bool IterationLoopBody(const FPCGContext& InContext, int64 Iteration, const UPCGSpatialData* InA, const UPCGSpatialData* InB, FPCGPoint& OutPoint, UPCGMetadata* OutMetadata) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void IterationLoop(UPARAM(Ref) FPCGContext& InContext, int64 NumIterations, UPCGPointData*& OutData, const UPCGSpatialData* OptionalA, const UPCGSpatialData* OptionalB, UPCGPointData* OptionalOutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCacheableOverride() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSeed(UPARAM(Ref) FPCGContext& InContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FRandomStream GetRandomStream(UPARAM(Ref) FPCGContext& InContext) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPCGPinProperties> GetOutputPins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetOutputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FPCGPinProperties> GetInputPins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInputPinByLabel(FName InPinLabel, FPCGPinProperties& OutFoundPin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPCGContext GetContext() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ExecuteWithContext(UPARAM(Ref) FPCGContext& InContext, const FPCGDataCollection& Input, FPCGDataCollection& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Execute(const FPCGDataCollection& Input, FPCGDataCollection& Output);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 DynamicPinTypesOverride(const UPCGSettings* InSettings, const UPCGPin* InPin) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FName> CustomOutputLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<FName> CustomInputLabels() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApplyPreconfiguredSettings(const FPCGPreConfiguredSettingsInfo& InPreconfigureInfo);
    
};

