#include "clip.h"
#include "clip_win.h"

namespace clip {

lock::impl::impl(void*) {}
~lock::impl::impl() {}

bool lock::impl::locked() const {
  // TODO
  return false;
}

bool lock::impl::clear() {
  // TODO
}

bool is_convertiable(format f) const {
  // TODO
}

bool set_data(format f, const char* buf, size_t len) {
  // TODO
}

bool get_data(format f, char *buf, size_t len) const {
  // TODO
}

size_t get_data_length(format f) const {
  // TODO
}

bool set_image(const image& image) {
  // TODO
}

bool get_image(image& image) const {
  // TODO
}

bool get_image_spec(image_spec& spec) const {
  // TODO
}

}  // namespace clip
