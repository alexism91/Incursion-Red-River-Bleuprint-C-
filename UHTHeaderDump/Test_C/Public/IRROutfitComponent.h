#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERendererStencilMask -FallbackName=ERendererStencilMask
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "ClothingItem.h"
#include "EIRROutfitView.h"
#include "IRROutfitPiece.h"
#include "IRROutfitComponent.generated.h"

class AController;
class APawn;
class UGroomComponent;
class UIRRAppearanceSetup;
class USkeletalMesh;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UIRROutfitComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIRRAppearanceSetup* OutfitPreset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothingItem> OutfitItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRollFirstVariants;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LeaderMeshTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLeaderBounds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildOnDedicatedServer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMergePieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFreezePoseOnBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPiecesRenderCustomDepth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CustomDepthStencilValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERendererStencilMask CustomDepthStencilWriteMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroomLODSyncInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName GroomAttachBone;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Pieces, meta=(AllowPrivateAccess=true))
    TArray<FIRROutfitPiece> Pieces;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> PieceComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGroomComponent*> GroomComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> StaticMeshComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* MergedComponent;
    
public:
    UIRROutfitComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SwitchPerspective(bool bFirstPerson);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetupPieceComponent(USkeletalMeshComponent* Component, const FIRROutfitPiece& Piece);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetShadowsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetRenderCustomDepth(bool bNewRenderCustomDepth);
    
    UFUNCTION(BlueprintCallable)
    void SetPoseFrozen(bool bFrozen);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetPiece(FGameplayTag Slot, USkeletalMesh* Mesh, EIRROutfitView View);
    
    UFUNCTION(BlueprintCallable)
    void SetOutfitPreset(UIRRAppearanceSetup* NewPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetMergePieces(bool bMerge);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenInGame(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable)
    void SetGroomMinLOD(int32 NewMinLOD);
    
    UFUNCTION(BlueprintCallable)
    void SetCastDynamicShadow(bool bNewCastDynamicShadow);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_Pieces();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPoseFrozen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasPiece(FGameplayTag Slot) const;
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePawnRestarted(APawn* Pawn);
    
    UFUNCTION(BlueprintCallable)
    void HandleControllerChanged(APawn* Pawn, AController* OldController, AController* NewController);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPieceComponents(TArray<USkeletalMeshComponent*>& OutComponents) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponent* GetPieceComponent(FGameplayTag Slot) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIRRAppearanceSetup* GetOutfitPreset() const;
    
};

