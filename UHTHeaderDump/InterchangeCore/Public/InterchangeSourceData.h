#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InterchangeSourceData.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInterchangeSourceData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> ContextObjectsByTag;
    
public:
    UInterchangeSourceData();

    UFUNCTION(BlueprintCallable)
    bool SetFilename(const FString& InFilename);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetContextObjectByTag(const FString& Tag, UObject* Object) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void RemoveAllContextObjects() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetFilename() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetContextObjectByTag(const FString& Tag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetAllContextObjectTags() const;
    
};

