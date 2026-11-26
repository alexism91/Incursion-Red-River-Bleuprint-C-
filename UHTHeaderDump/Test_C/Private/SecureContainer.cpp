#include "SecureContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ASecureContainer::ASecureContainer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->FeeAmount = 5000;
    this->ContainerLayout = NULL;
    this->InventoryWidget = NULL;
    this->LootContentName = TEXT("Secure Container");
    this->SessionClass = NULL;
    this->InboxTitle = FText::FromString(TEXT("Conteneur sécurisé"));
    this->InboxBody = FText::FromString(TEXT("Objets récupérés de ton conteneur sécurisé."));
    this->Billboard->SetupAttachment(RootComponent);
}

void ASecureContainer::RequestOpen(APawn* InstigatorPawn, FName ContentName) {
}

void ASecureContainer::PayFee() {
}

void ASecureContainer::OpenFromInteraction(AActor* InteractingActor, FName ContentName) {
}

void ASecureContainer::OpenForPlayer(APawn* InstigatorPawn, FName ContentName) {
}

bool ASecureContainer::IsFeePaid() const {
    return false;
}

ASecureContainerSession* ASecureContainer::GetSessionFor(APlayerController* PlayerController) const {
    return NULL;
}

ASecureContainerSession* ASecureContainer::GetLocalSession() const {
    return NULL;
}

FGameplayTag ASecureContainer::GetFeeItemTag() const {
    return FGameplayTag{};
}

int32 ASecureContainer::GetFeeAmount() const {
    return 0;
}

bool ASecureContainer::CanPayFee() const {
    return false;
}


