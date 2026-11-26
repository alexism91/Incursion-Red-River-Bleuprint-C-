#include "InventoryWindowWidget.h"

UInventoryWindowWidget::UInventoryWindowWidget() : UUserWidget(FObjectInitializer::Get()) {
    this->ItemRef = NULL;
    this->InventoryWindowCanvasRef = NULL;
    this->bOnInspectImageMouseDown = false;
    this->InspectActor = NULL;
    this->SpecialContainerRef = NULL;
}

void UInventoryWindowWidget::OnItemStatsChanged(TArray<FCurrentStatItem> NewStats) {
}





