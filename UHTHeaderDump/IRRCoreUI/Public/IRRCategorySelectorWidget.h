#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Widget -FallbackName=Widget
#include "OnIRRCategorySelectionChangedDelegate.h"
#include "IRRCategorySelectorWidget.generated.h"

UCLASS(Blueprintable)
class IRRCOREUI_API UIRRCategorySelectorWidget : public UWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RootTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowNone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText NoneLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AnyLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Spacing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DropdownWidth;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnIRRCategorySelectionChanged OnSelectionChanged;
    
    UIRRCategorySelectorWidget();

    UFUNCTION(BlueprintCallable)
    bool SetSelectedCategory(FGameplayTag Category);
    
    UFUNCTION(BlueprintCallable)
    void RefreshOptions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FGameplayTag> GetSelectedPath() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelectedCategory(FGameplayTag& OutCategory) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearSelection();
    
};

