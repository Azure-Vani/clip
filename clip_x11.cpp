#include "clip.h"
#include "clip_x11.h"

namespace clip {

lock::impl::impl(void*) {
  x11_connection_ = xcb_connect(nullptr, nullptr);
  if (x11_connection_ == nullptr) {
    error_handler e = get_error_handler();
    if (e) e(ErrorCode::CannotLock);
  }

  xcb_screen_t* screen;
  screen = xcb_setup_roots_iterator(xcb_get_setup(x11_connection_)).data;

  x11_window_ = xcb_generate_id(x11_connection_);
  xcb_create_window(x11_connection_, screen->root_depth, x11_window_,
                    screen->root, 0, 0, 1, 1, 0,
                    XCB_COPY_FROM_PARENT, screen->root_visual, 0, 0);
}

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
