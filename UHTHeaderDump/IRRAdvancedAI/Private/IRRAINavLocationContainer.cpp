#include "IRRAINavLocationContainer.h"

UIRRAINavLocationContainer::UIRRAINavLocationContainer() {
}

bool UIRRAINavLocationContainer::HasNodeRef() const {
    return false;
}

bool UIRRAINavLocationContainer::HasLocation() const {
    return false;
}

FIRRNavLocation UIRRAINavLocationContainer::GetNavLocation() const {
    return FIRRNavLocation{};
}


