#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedPropertyBag -FallbackName=InstancedPropertyBag
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EMovieGraphBranchRestriction.h"
#include "EMovieGraphPinQueryRequirement.h"
#include "MovieGraphPinProperties.h"
#include "MovieGraphPropertyInfo.h"
#include "MovieGraphNode.generated.h"

class UMovieGraphPin;

UCLASS(Abstract, Blueprintable)
class MOVIERENDERPIPELINECORE_API UMovieGraphNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> ScriptTags;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphPin*> InputPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMovieGraphPin*> OutputPins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedPropertyBag DynamicProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieGraphPropertyInfo> ExposedPropertyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsDisabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid Guid;
    
public:
    UMovieGraphNode();

    UFUNCTION(BlueprintCallable)
    void UnpromotePropertyFromPin(const FName& PropertyName);
    
    UFUNCTION(BlueprintCallable)
    void TogglePromotePropertyToPin(const FName& PropertyName);
    
    UFUNCTION(BlueprintCallable)
    void SetDisabled(const bool bNewDisableState);
    
    UFUNCTION(BlueprintCallable)
    void PromotePropertyToPin(const FName& PropertyName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieGraphPropertyInfo> GetOverrideablePropertyInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphPin*> GetOutputPins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieGraphPinProperties> GetOutputPinProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphPin* GetOutputPin(const FName& InPinLabel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UMovieGraphPin*> GetInputPins() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieGraphPinProperties> GetInputPinProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphPin* GetInputPin(const FName& InPinLabel, const EMovieGraphPinQueryRequirement PinRequirement) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphPin* GetFirstConnectedOutputPin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMovieGraphPin* GetFirstConnectedInputPin() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FMovieGraphPropertyInfo> GetExposedProperties() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMovieGraphBranchRestriction GetBranchRestriction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeDisabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBeAddedByUser() const;
    
};

