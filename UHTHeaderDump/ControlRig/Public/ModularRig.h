#pragma once
#include "CoreMinimal.h"
#include "ControlRig.h"
#include "ModularRigModel.h"
#include "ModularRigSettings.h"
#include "RigModuleExecutionElement.h"
#include "RigModuleInstance.h"
#include "ModularRig.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew, MinimalAPI)
class UModularRig : public UControlRig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigModuleInstance> Modules;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModularRigSettings ModularRigSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FModularRigModel ModularRigModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRigModuleExecutionElement> ExecutionQueue;
    
    UModularRig();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetParentPathForBP(const FString& InModulePath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetParentModuleNameForBP(FName InModuleName) const;
    
    UFUNCTION(BlueprintCallable)
    UControlRig* GetModuleRigByName(FName InModuleName);
    
    UFUNCTION(BlueprintCallable)
    UControlRig* GetModuleRig(const FString& InModulePath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetModulePaths() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetModuleNames() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetEventsForModuleByName(FName InModuleName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetEventsForModule(const FString& InModulePath) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FName> GetEventsForAllModules() const;
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteEventOnModuleForBP(FName InEvent, const FString& InModulePath);
    
    UFUNCTION(BlueprintCallable)
    bool ExecuteEventOnModuleByNameForBP(FName InEvent, FName InModuleName);
    
    UFUNCTION(BlueprintCallable)
    TArray<FName> ExecuteEventOnAllModules(FName InEvent);
    
};

