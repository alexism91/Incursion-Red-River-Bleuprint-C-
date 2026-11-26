#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTaskOwnerInterface -FallbackName=GameplayTaskOwnerInterface
#include "EHTNNodeInstancePoolingMode.h"
#include "HTNNode.generated.h"

class AAIController;
class APawn;
class UHTN;
class UHTNComponent;
class UHTNNode;

UCLASS(Abstract, Blueprintable, Config=Game)
class HTN_API UHTNNode : public UObject, public IGameplayTaskOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHTNNodeInstancePoolingMode NodeInstancePoolingMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTNNode* TemplateNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCreateNodeInstance: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UHTN* HTNAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UHTNComponent* OwnerComponent;
    
public:
    UHTNNode();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTNNode* GetTemplateNode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetStaticDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetShortDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AAIController* GetOwnerController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UHTNComponent* GetOwnerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetNodeName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    APawn* GetControlledPawn() const;
    

    // Fix for true pure virtual functions not being implemented
};

