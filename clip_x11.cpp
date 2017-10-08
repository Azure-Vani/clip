#include "clip.h"
#include "clip_win.h"

namespace clip {

lock::impl::impl(void*) {}
lock::impl::~impl() {}

bool lock::impl::locked() const {
  return true;
}

bool lock::impl::clear() {
  // TODO
}

bool lock::impl::is_convertible(format f) const {
  // TODO: Currently it only supports text format, will support other format
  // listed at ICCCM standard in future.
  if (f == text_format()) {
    return true;
  }
  return false;
}

bool lock::impl::set_data(format f, const char* buf, size_t len) {
  // TODO
}

bool lock::impl::get_data(format f, char *buf, size_t len) const {
  // TODO
}

size_t lock::impl::get_data_length(format f) const {
  // TODO
}

bool lock::impl::set_image(const image& image) {
  // TODO
}

bool lock::impl::get_image(image& image) const {
  // TODO
}

bool lock::impl::get_image_spec(image_spec& spec) const {
  // TODO
}

}  // namespace clip
