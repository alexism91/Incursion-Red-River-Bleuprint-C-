#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EInterchangeFactoryAssetType.h"
#include "InterchangeFactoryBase.generated.h"

class UInterchangeResultsContainer;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UInterchangeFactoryBase : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInterchangeResultsContainer* Results;
    
    UInterchangeFactoryBase();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool SetSourceFilename(const UObject* Object, const FString& SourceFilename, int32 SourceIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSourceFilenames(const UObject* Object, TArray<FString>& OutSourceFilenames) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetFactoryClass() const;
    
    UFUNCTION(BlueprintCallable)
    EInterchangeFactoryAssetType GetFactoryAssetType();
    
};

