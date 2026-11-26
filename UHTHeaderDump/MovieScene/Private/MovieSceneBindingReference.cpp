#include "MovieSceneBindingReference.h"

FMovieSceneBindingReference::FMovieSceneBindingReference() {
    this->ResolveFlags = ELocatorResolveFlags::None;
    this->CustomBinding = NULL;
}

