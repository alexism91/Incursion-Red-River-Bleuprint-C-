#include "NiagaraDataChannelHandler.h"

UNiagaraDataChannelHandler::UNiagaraDataChannelHandler() {
    this->Writer = NULL;
    this->Reader = NULL;
}

void UNiagaraDataChannelHandler::UnsubscribeFromDataChannelUpdates(const int32& UnsubscribeToken) {
}

void UNiagaraDataChannelHandler::SubscribeToDataChannelUpdates(FOnNewNiagaraDataChannelPublish UpdateDelegate, FNiagaraDataChannelSearchParameters SearchParams, int32& UnsubscribeToken) {
}

UNiagaraDataChannelWriter* UNiagaraDataChannelHandler::GetDataChannelWriter() {
    return NULL;
}

UNiagaraDataChannelReader* UNiagaraDataChannelHandler::GetDataChannelReader() {
    return NULL;
}


