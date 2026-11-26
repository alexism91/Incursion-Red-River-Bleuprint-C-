#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=LiveLinkInterface -ObjectName=LiveLinkSubjectRepresentation -FallbackName=LiveLinkSubjectRepresentation
#include "LiveLinkTickDelegateDelegate.h"
#include "OnControllerMapUpdatedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "LiveLinkComponentController.generated.h"

class ULiveLinkControllerBase;
class ULiveLinkRole;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class ULiveLinkComponentController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkSubjectRepresentation SubjectRepresentation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Interp, NoClear, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<ULiveLinkRole>, ULiveLinkControllerBase*> ControllerMap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateInEditor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLiveLinkTickDelegate OnLiveLinkUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnControllerMapUpdatedDelegate OnControllerMapUpdatedDelegate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableEvaluateLiveLinkWhenSpawnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEvaluateLiveLink;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUpdateInPreviewEditor;
    
    ULiveLinkComponentController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetSubjectRepresentation(FLiveLinkSubjectRepresentation InSubjectRepresentation);
    
    UFUNCTION(BlueprintCallable)
    void SetControlledComponent(TSubclassOf<ULiveLinkRole> InRoleClass, UActorComponent* InComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLiveLinkSubjectRepresentation GetSubjectRepresentation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UActorComponent* GetControlledComponent(TSubclassOf<ULiveLinkRole> InRoleClass) const;
    
};

