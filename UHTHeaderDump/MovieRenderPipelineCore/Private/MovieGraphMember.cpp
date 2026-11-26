#include "MovieGraphMember.h"

UMovieGraphMember::UMovieGraphMember() {
    this->bIsEditable = true;
}

bool UMovieGraphMember::SetMemberName(const FString& InNewName) {
    return false;
}

bool UMovieGraphMember::IsEditable() const {
    return false;
}

bool UMovieGraphMember::IsDeletable() const {
    return false;
}

FString UMovieGraphMember::GetMemberName() const {
    return TEXT("");
}

FGuid UMovieGraphMember::GetGuid() const {
    return FGuid{};
}

bool UMovieGraphMember::CanRename(const FText& InNewName, FText& OutError) const {
    return false;
}


