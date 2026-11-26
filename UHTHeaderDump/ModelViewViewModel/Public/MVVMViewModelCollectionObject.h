#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MVVMViewModelCollection.h"
#include "MVVMViewModelContext.h"
#include "Templates/SubclassOf.h"
#include "MVVMViewModelCollectionObject.generated.h"

class UMVVMViewModelBase;

UCLASS(Blueprintable, MinimalAPI)
class UMVVMViewModelCollectionObject : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMVVMViewModelCollection ViewModelCollection;
    
public:
    UMVVMViewModelCollectionObject();

    UFUNCTION(BlueprintCallable)
    bool RemoveViewModel(FMVVMViewModelContext Context);
    
    UFUNCTION(BlueprintCallable)
    int32 RemoveAllViewModelInstance(UMVVMViewModelBase* ViewModel);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMVVMViewModelBase* FindViewModelInstance(FMVVMViewModelContext Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMVVMViewModelBase* FindFirstViewModelInstanceOfType(const TSubclassOf<UMVVMViewModelBase>& ViewModelClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool AddViewModelInstance(FMVVMViewModelContext Context, UMVVMViewModelBase* ViewModel);
    
};

