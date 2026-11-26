#pragma once
#include "CoreMinimal.h"
#include "IRRMessageComponent.h"
#include "IRRMissionWorldBinding.h"
#include "IRRObjectiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRObjectiveComponent : public UIRRMessageComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Bindings, meta=(AllowPrivateAccess=true))
    TArray<FIRRMissionWorldBinding> Bindings;
    
    UIRRObjectiveComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void RemoveBinding(const FIRRMissionWorldBinding& BindingToRemove);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Bindings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasBindings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRMissionWorldBinding> GetBindings() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearBindings();
    
    UFUNCTION(BlueprintCallable)
    void AddBinding(const FIRRMissionWorldBinding& NewBinding);
    
};

