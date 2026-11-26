#pragma once
#include "CoreMinimal.h"
#include "PCGAttributePropertyInputSelector.h"
#include "PCGData.h"
#include "PCGParamData.generated.h"

class UPCGParamData;

UCLASS(Blueprintable, MinimalAPI)
class UPCGParamData : public UPCGData {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, int64> NameMap;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCachedLastSelector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPCGAttributePropertyInputSelector CachedLastSelector;
    
public:
    UPCGParamData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPCGParamData* K2_FilterParamsByName(const FName& InName) const;
    
    UFUNCTION(BlueprintPure)
    UPCGParamData* K2_FilterParamsByKey(int64 InKey) const;
    
    UFUNCTION(BlueprintCallable)
    int64 FindOrAddMetadataKey(const FName& InName);
    
    UFUNCTION(BlueprintPure)
    int64 FindMetadataKey(const FName& InName) const;
    
};

