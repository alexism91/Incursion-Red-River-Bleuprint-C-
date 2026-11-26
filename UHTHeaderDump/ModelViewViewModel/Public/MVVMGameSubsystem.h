#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameInstanceSubsystem -FallbackName=GameInstanceSubsystem
#include "MVVMGameSubsystem.generated.h"

class UMVVMViewModelCollectionObject;

UCLASS(Blueprintable, MinimalAPI)
class UMVVMGameSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMVVMViewModelCollectionObject* ViewModelCollection;
    
public:
    UMVVMGameSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMVVMViewModelCollectionObject* GetViewModelCollection() const;
    
};

