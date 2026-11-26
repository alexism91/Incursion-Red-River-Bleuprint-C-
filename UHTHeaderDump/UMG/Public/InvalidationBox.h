#pragma once
#include "CoreMinimal.h"
#include "ContentWidget.h"
#include "InvalidationBox.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UInvalidationBox : public UContentWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanCache;
    
public:
    UInvalidationBox();

    UFUNCTION(BlueprintCallable)
    void SetCanCache(bool CanCache);
    
    UFUNCTION(BlueprintCallable)
    void InvalidateCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCanCache() const;
    
};

