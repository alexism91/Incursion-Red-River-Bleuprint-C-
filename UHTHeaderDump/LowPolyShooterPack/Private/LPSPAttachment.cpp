#include "LPSPAttachment.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=StaticMeshComponent -FallbackName=StaticMeshComponent

ALPSPAttachment::ALPSPAttachment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
    this->Mesh = (UStaticMeshComponent*)RootComponent;
    this->bAlwaysVisible = false;
    this->Texture = NULL;
}

bool ALPSPAttachment::IsAlwaysVisible() const {
    return false;
}

FLinearColor ALPSPAttachment::GetTextureTint() const {
    return FLinearColor{};
}

UTexture* ALPSPAttachment::GetTexture() const {
    return NULL;
}

FLPSPOffset ALPSPAttachment::GetOffset() const {
    return FLPSPOffset{};
}


