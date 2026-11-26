#pragma once
#include "CoreMinimal.h"
#include "NameSpacedUserData.h"
#include "DataAssetLink.generated.h"

class UDataAsset;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UDataAssetLink : public UNameSpacedUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UDataAsset> DataAsset;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataAsset* DataAssetCached;
    
public:
    UDataAssetLink();

    UFUNCTION(BlueprintCallable)
    void SetDataAsset(TSoftObjectPtr<UDataAsset> InDataAsset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UDataAsset> GetDataAsset() const;
    
};

