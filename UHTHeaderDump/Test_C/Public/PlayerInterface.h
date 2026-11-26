#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "PlayerInterface.generated.h"

class UCameraComponent;
class UStaticMesh;
class UStaticMeshComponent;

UINTERFACE(Blueprintable)
class UPlayerInterface : public UInterface {
    GENERATED_BODY()
};

class IPlayerInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UStaticMeshComponent* UpdateInteractionMeshComponent(UStaticMesh* NewMesh, FName SocketName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SwitchPerspective(bool bFirstPerson);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayerHidden(bool bNewHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SaveInventoryInGame(const TArray<int32>& ContainerIndexes, bool bForceClearInventory);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsFirstPersonPerspective();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCameraComponent* GetThirdPersonCameraComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UCameraComponent* GetFirstPersonCameraComponent();
    
};

