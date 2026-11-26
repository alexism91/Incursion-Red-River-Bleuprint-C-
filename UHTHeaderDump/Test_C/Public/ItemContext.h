#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ContainerItem.h"
#include "ItemContext.generated.h"

class AActor;
class UItemAction;
class UItemWidget;
class UTexture2D;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class TEST_C_API UItemContext : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ContextName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ContextIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToVendor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAddToInspector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideoutSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInGameSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValidIfPending;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UItemAction*> ToTriggerActions;
    
    UItemContext();

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldAddToContextList(AActor* Owner, UItemWidget* ItemRef, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsValidContext(AActor* Owner, UItemWidget* ItemRef, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasValidTriggerActions(AActor* Owner, UItemWidget* ItemRef, FContainerItem Item);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetOwningActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FName GetItemContextText(AActor* Owner, UItemWidget* ItemRef);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void Execute(AActor* Owner, UItemWidget* ItemRef, FContainerItem Item);
    
};

