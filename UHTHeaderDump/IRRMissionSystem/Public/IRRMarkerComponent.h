#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "IRRMarkerSettings.h"
#include "IRRMissionWorldBinding.h"
#include "IRRMarkerComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class IRRMISSIONSYSTEM_API UIRRMarkerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMarkerSelected, bool, bSelected);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIRRMarkerSettings MarkerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    AActor* CustomOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsAdded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsSelected, meta=(AllowPrivateAccess=true))
    bool bIsSelected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMarkerSelected OnSelectedMarkerDelegate;
    
    UIRRMarkerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ToggleMarker(bool bAdd);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCustomOwner(AActor* NewOwner);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SelectMarker(bool bSelect);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsSelected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelectable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIRRMissionWorldBinding> GetMissionBindings() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRMissionWorldBinding GetMissionBinding() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FIRRMarkerSettings GetMarkerSettings();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetMarkerLocation();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetCustomOwner();
    
};

