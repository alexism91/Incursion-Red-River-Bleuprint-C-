#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Color -FallbackName=Color
#include "DataAsset.h"
#include "EDataLayerLoadFilter.h"
#include "EDataLayerType.h"
#include "DataLayerAsset.generated.h"

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDataLayerAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataLayerType DataLayerType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSupportsActorFilters;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor DebugColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDataLayerLoadFilter LoadFilter;
    
public:
    UDataLayerAsset();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsServerOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRuntime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsClientOnly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDataLayerType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FColor GetDebugColor() const;
    
};

