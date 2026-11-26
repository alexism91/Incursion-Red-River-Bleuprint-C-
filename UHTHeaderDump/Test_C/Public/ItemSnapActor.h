#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TimerHandle -FallbackName=TimerHandle
#include "ContainerItem.h"
#include "OnCaptureItemFinishedDelegate.h"
#include "OnFOVUpdatedDelegate.h"
#include "OnLocationUpdatedDelegate.h"
#include "ItemSnapActor.generated.h"

class UDuplicateItemComponent;
class UInventoryComponent;
class USceneCaptureComponent2D;
class USceneComponent;
class USpringArmComponent;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, NoExport)
class TEST_C_API AItemSnapActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ItemRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* SpringArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneCaptureComponent2D* CaptureComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Location_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV_Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FOV_OffsetPercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseCustomRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FinishCaptureDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldPrepareSnap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem ContainerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* OwningInventoryComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDuplicateItemComponent* DuplicateItemComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFullyStreamedIn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D ItemRealWorldSize;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLocationUpdated OnLocationUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFOVUpdated OnFOVUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCaptureItemFinished OnCaptureItemFinished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTimerHandle ItemSnapTimerHandle;
    
    AItemSnapActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateSnapActors();
    
    UFUNCTION(BlueprintCallable)
    void UpdateLocationOffset(FVector2D NewLocationOffset);
    
    UFUNCTION(BlueprintCallable)
    void UpdateLocationAndFOV(bool bLocation, bool bFOV);
    
    UFUNCTION(BlueprintCallable)
    void UpdateFOVOffset(float NewFOVOffset);
    
    UFUNCTION(BlueprintCallable)
    bool TexturesFullyStreamedIn();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetLocation(FVector2D NewLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetFOV(float NewFOV);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RequestCaptureItem(bool bLocation, bool bFOV);
    
    UFUNCTION(BlueprintCallable)
    static void PrepareActor(AActor* ItemRef, bool bStart);
    
    UFUNCTION(BlueprintCallable)
    void InitItem(UInventoryComponent* NewOwningInventoryComponent, FContainerItem Item, UTexture*& NewTexture, FVector2D& NewRealWorldSize);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void FinishCaptureItem();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Debug(float CurrentOffset, bool bUp);
    
    UFUNCTION(BlueprintCallable)
    void ClearItems();
    
};

