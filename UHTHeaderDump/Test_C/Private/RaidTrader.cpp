#include "RaidTrader.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BillboardComponent -FallbackName=BillboardComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent

ARaidTrader::ARaidTrader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->SceneRoot = (USceneComponent*)RootComponent;
    this->Billboard = CreateDefaultSubobject<UBillboardComponent>(TEXT("Billboard"));
    this->StockPreset = NULL;
    this->StockLayout = NULL;
    this->bAcceptCash = true;
    this->bGiveChange = false;
    this->PriceMultiplier = 1.00f;
    this->InventoryWidget = NULL;
    this->SessionClass = NULL;
    this->Billboard->SetupAttachment(RootComponent);
}

void ARaidTrader::RequestOpen(APawn* InstigatorPawn, FName ContentName) {
}

void ARaidTrader::OpenFromInteraction(AActor* InteractingActor, FName ContentName) {
}

void ARaidTrader::OpenForPlayer(APawn* InstigatorPawn, FName ContentName) {
}

void ARaidTrader::OnCharacterDeath(AIRRBaseCharacter* Character) {
}


ARaidTraderSession* ARaidTrader::GetSessionFor(APlayerController* PlayerController) const {
    return NULL;
}

ARaidTraderSession* ARaidTrader::GetLocalSession() const {
    return NULL;
}


