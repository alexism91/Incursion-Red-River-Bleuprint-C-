#include "SecureContainerSession.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Net/UnrealNetwork.h"
#include "SecureContainerInventoryComponent.h"

ASecureContainerSession::ASecureContainerSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOnlyRelevantToOwner = true;
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Inventory = CreateDefaultSubobject<USecureContainerInventoryComponent>(TEXT("Inventory"));
    this->bFeePaid = false;
    this->OwningContainer = NULL;
    this->FeeAmount = 0;
    this->InventoryWidgetClass = NULL;
    this->LootContentName = TEXT("Secure Container");
}

bool ASecureContainerSession::WasShipped() const {
    return false;
}

void ASecureContainerSession::ServerPayFee_Implementation() {
}

void ASecureContainerSession::PresentToPlayerInventory() {
}

void ASecureContainerSession::PayFee() {
}

void ASecureContainerSession::OnRep_FeePaid() {
}

void ASecureContainerSession::NotifyOpened_Implementation() {
}

void ASecureContainerSession::NotifyFeePaid_Implementation() {
}

bool ASecureContainerSession::IsFeePaid() const {
    return false;
}

ASecureContainer* ASecureContainerSession::GetOwningContainer() const {
    return NULL;
}

UInventoryComponent* ASecureContainerSession::GetInventoryComponent() const {
    return NULL;
}

FGameplayTag ASecureContainerSession::GetFeeItemTag() const {
    return FGameplayTag{};
}

int32 ASecureContainerSession::GetFeeAmount() const {
    return 0;
}

void ASecureContainerSession::ClientNotifyOpened_Implementation() {
}

void ASecureContainerSession::ClientDeliverInbox_Implementation(const TArray<FSecureContainerShippedItem>& Items, const FString& Title, const FText& Body, const TSoftObjectPtr<UIRRAgentSetup>& Author) {
}

bool ASecureContainerSession::CanPayFee() const {
    return false;
}

void ASecureContainerSession::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ASecureContainerSession, bFeePaid);
    DOREPLIFETIME(ASecureContainerSession, OwningContainer);
    DOREPLIFETIME(ASecureContainerSession, FeeAmount);
    DOREPLIFETIME(ASecureContainerSession, FeeItemTag);
    DOREPLIFETIME(ASecureContainerSession, InventoryWidgetClass);
    DOREPLIFETIME(ASecureContainerSession, LootContentName);
}


