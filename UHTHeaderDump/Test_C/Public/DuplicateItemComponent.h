#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "ContainerItem.h"
#include "DuplicateContainerItem.h"
#include "MainContainer.h"
#include "Templates/SubclassOf.h"
#include "DuplicateItemComponent.generated.h"

class AActor;
class UInventoryComponent;
class USceneComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class TEST_C_API UDuplicateItemComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FContainerItem ItemToDuplicate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInventoryComponent* ItemOwningComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuplicateContainerItem> DuplicatedItems;
    
    UDuplicateItemComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateItem(FContainerItem Item);
    
    UFUNCTION(BlueprintCallable)
    AActor* SpawnAttachment(TSubclassOf<AActor> Class, AActor* ParentActor, FName AttachmentSocket);
    
    UFUNCTION(BlueprintCallable)
    void SetRootComponent(USceneComponent* NewRootComponent);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveAttachment(FGuid AttachmentUID);
    
    UFUNCTION(BlueprintCallable)
    void InitDuplicateItem(FContainerItem NewItemToDuplicate, UInventoryComponent* NewItemOwningComp);
    
    UFUNCTION(BlueprintCallable)
    void HandleChildAttachments(FGuid AttachmentUID, bool bAdd);
    
    UFUNCTION(BlueprintCallable)
    TArray<FDuplicateContainerItem> GetDuplicatedItems();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetDuplicatedActors();
    
    UFUNCTION(BlueprintCallable)
    AActor* GetDuplicateActorByUID(FGuid ItemUID);
    
    UFUNCTION(BlueprintCallable)
    void GetCaptureInformation(FVector2D& RealWorldSize, FVector2D& Offset, float& FOV, float CameraDistance);
    
    UFUNCTION(BlueprintCallable)
    void ClearDuplicateItem();
    
    UFUNCTION(BlueprintCallable)
    bool AddAttachment(FMainContainer MainContainer, FContainerItem Item);
    
};

