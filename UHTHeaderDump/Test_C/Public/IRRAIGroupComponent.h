#pragma once
#include "CoreMinimal.h"
#include "IRRAIBaseControllerComponent.h"
#include "IRRAIGroupMemberData.h"
#include "IRRDamageData.h"
#include "IRRAIGroupComponent.generated.h"

class AActor;
class AIRRAIGroupController;
class UIRRAIGroupComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRRAIGroupComponent : public UIRRAIBaseControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRAIGroupMemberData GroupMemberData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIRRAIGroupController* GroupController;
    
public:
    UIRRAIGroupComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnDeath(FIRRDamageData DamageData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActorInGroup(const AActor* Actor) const;
    
    UFUNCTION(BlueprintCallable)
    void GetOtherGroupMembers(TArray<UIRRAIGroupComponent*>& Array);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRAIGroupMemberData GetGroupMemberData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIRRAIGroupController* GetGroupController() const;
    
};

